### Q3) Take three variables as input and add them without using the + operator (Use your head for this)
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
