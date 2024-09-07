### Q7) Implement an algorithm for making a simple calculator with all the operators (+,-,*,/,%) 
````
PRINT " Enter First Number
INPUT Num1
PRINT " Enter Operator + or - or * or /"
INPUT Operator
PRINT " Enter Second Number"
INPUT Num2
answer = null

IF Operator  == "+" THEN 
	answer = Num1 + Num2
ELSEIF Operator  == "-" THEN 
	answer = Num1 - Num2
ELSEIF Operator  == "*" THEN 
	answer = Num1 * Num2

ELSEIF Operator  == "/" THEN 
	IF Num2 != 0 THEN
		answer = Num1 / Num2
	ELSE 
		PRINT " Math Error"
ELSE 
	PRINT " enter valid operator "
PRINT " The answer is :", answer
````
