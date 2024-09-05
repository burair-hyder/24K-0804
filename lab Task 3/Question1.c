//  Question 1

// this code gives error(un expected number).As testinteger is defined as an integer. the integer variable can only have 4 bytes which means a max value of 2147483647 can be stored. the value 3000000000 is greater
// than 2147483647. to solve this error we can simple define testinteger as "double".

#include <stdio.h>

int main()
{

	double testinteger = 3000000000;
	printf("Number is %lf",testinteger);



}
