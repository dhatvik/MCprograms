#Factorial of a number
AREA FCT,CODE,READONLY
N RN 1
FACT RN 2
ENTRY
	MOV N,#5
	MOV FACT,#1
LOOP	MUL FACT,N,FACT
		SUBS N,N,#1
		BNE LOOP
GO B GO
	END
