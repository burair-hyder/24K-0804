### Q5) Implement an algorithm for determining if an Nth is a divisor of an n Number (i.e. 2 is a divisor of 6).If so, determine if it’s an even number or odd number as well. 
 
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
