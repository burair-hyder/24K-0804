# **Lab Task 2**

### Q1)You are working at Toyota Indus Motors and want to assemble a car. Design a flowchart with proper
### process modules and decision structures to replicate a pipeline producƟon.
![PFlab2](https://github.com/user-attachments/assets/b1f12c9c-c618-4597-b4fb-7d80fff85234)


### Q2 )  Find the maximum number in any of three variables. 
````
PRINT "Enter first Number :"
INPUT Num1
PRINT "Enter second Number :"
INPUT Num2
PRINT "Enter third Number :"
INPUT Num3

Largest = Num1

IF  Num2 > Largest  THEN 
	Largest = Num2
IF Num3 > largest THEN 
	Largest  = Num3

PRINT " Largest Number is :", Largest

````
### Q3) Take three variables as input
###     and add them without using the + operator (Use your head for this)
``````
PRINT " Enter first Number"
INPUT Num1
PRINT " Enter second Number"
INPUT Num2
PRINT " Enter third Number"
INPUT Num3

Sum = 0

IF Num1 > 0 and Num2  > 0 and Num3 > 0 THEN 
	Num1_Negative = Num1 * (-1)
	Negative_Sum = Num1_Negative - Num2 - Num3
	Pos_Sum = Negative_Sum * (-1)

PRINT "The Sum of 3 Numbers is :", Pos_Sum
``````
Q4)Create a small calculator which only does ‘+’ or ‘-‘OperaƟons. (Hint: Take three variable inputs with
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
### Q5) Implement an algorithm for determining if an Nth is a divisor of an n Number (i.e. 2 is a divisor of 6).
### If so, determine if it’s an even number or odd number as well. 
````
PRINT " ENTER dividend: "
INPUT dividend
PRINT  " ENTER divisor :"
INPUT divisor

if dividend != 0 and divisor !=0 THEN 
	if dividend % divisor == 0 THEN 
		PRINT ( divisor," is a divisor of ", dividend)
		if dividend % 2 == 0 THEN	
			PRINT " the number was even "
		else 
			PRINT (" The number is odd ")
	else
		PRINT (" they are not divisible")
else 
	PRINT (" Please enter numbers greater than zero  ")

if dividend ==0 THEN
	print " the number was zero"
if dividend % 2 == 0 THEN	
	PRINT " the number was even "
else 
	PRINT " The number is odd "
+
````
### Q6) Implement an algorithm where the user enters a number, and an appropriate month is displayed. 
````


PRINT " Enter Month Number :"
REPEAT
	INPUT MonthNumber
	IF MonthNumber < 1 and MonthNumber > 12 :
		PRINT " PLEASE enter valid month number:
UNTILL MonthNumber >=1 and MontNumber <=12 


	

IF MonthNumber == 1:
	PRINT " The Month is January"

ELSEIF MonthNumber == 2:
	PRINT " The Month is Febraury"

ELSEIF MonthNumber == 3:
	PRINT " The Month is March"

ELSEIF MonthNumber == 4:
	PRINT " The Month is April"

ELSEIF MonthNumber == 5:
	PRINT " The Month is May"

ELSEIF MonthNumber == 6:
	PRINT " The Month is June"

ELSEIF MonthNumber == 7:
	PRINT " The Month is July"

ELSEIF MonthNumber == 8:
	PRINT " The Month is August"

ELSEIF MonthNumber == 9:
	PRINT " The Month is September"


ELSEIF MonthNumber == 10:
	PRINT " The Month is October"

ELSEIF MonthNumber == 11:
	PRINT " The Month is November"

ELSE
	PRINT " The Month is December"

````

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
