org 100h

.DATA
	msg DB 'Hello Holberton\n'

.CODE
MAIN PROC
	MOV AX @DATA
	MOV DS, AX
	LEA DX, msg
	MOV AH, 09H
	INT 21H
	END MAIN

ret
