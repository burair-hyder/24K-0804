# Q4)Create a small calculator which only does ‘+’ or ‘-‘OperaƟons. (Hint: Take three variable inputs with
one being used for the operator) 
````
PRINT " Enter First Number"
INPUT Num1
PRINT " Enter Operator + or -"
INPUT Operator
PRINT " Enter Second Number"
INPUT Num2

IF Operator == "+" THEN
	answer = Num1 + Num2
ELSEIF Operator  == "-" THEN
	answer = Num1 - Num2
ELSE
	PRINT " enter valid operator "
PRINT " the answer for this calculation is :", answer

````
