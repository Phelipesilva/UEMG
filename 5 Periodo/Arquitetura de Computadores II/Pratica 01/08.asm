.data 
	infonum: 	.asciiz "Informe um numero: "
	infotrue:	.asciiz "O numero informado � primo"
	infofalse:	.asciiz "O numero informado n�o � primo"
	
.text
	#recebe numero
	li $v0,4
	la $a0,infonum
	syscall
	
	li $v0,5
	syscall
	move $t0,$v0 				#move o numero para $t0
	
add $t7,$zero,$zero	 			#contador $t7 -> loop divisores
add $t6,$zero,$zero				#contador $t6 -> contador divisores inteiros

divisores:
	beq $t0,$t7,verifica_primo
		addi $t7,$t7,1  		#incrementa contador do loop -> $t7
		div $t0,$t7			#divide $t0 pelo contador $t7
		mfhi $t5			#$t5 -> resto da divisao
		bne $t5,$zero,nao_inteira 	#verifica se o resto da divisao � diferente de zero
			#resto zero, divisao inteira
			addi $t6,$t6,1		#incrementa contador de divisores -> $t6
			j divisores
		nao_inteira:
			#resto diferente de zero
			j divisores
		j fim

verifica_primo:
	addi $t4,$zero,2			#maximo de divisores de um numero primo � 2 e numeros menores que 2 nao sao primos
	blt $t0,$t4,n_primo			#verifica se $t0(numero informado) � menor que $t4(2) 
		#o numero � maior igual a 2
		bgt $t6,$t4,n_primo		#verifica se $t6(qntde de divisores) � maior que $t4(2)
			#o numero informado � maior igual a 2 e a quantidade de divisore � menor igual a 2, portanto � primo
			li $v0,4
			la $a0,infotrue
			syscall
			j fim
		j fim
	n_primo:
		#nao � primo
		li $v0,4
		la $a0,infofalse
		syscall

fim: