#include <stdio.h>

int main() {
    char arr[100];   
    int i, num = 0, x, res = 0; 
    int temp = 0;  
    char last_operator = '+'; 
    printf("Enter the expression: ");
    gets(arr);
    puts(arr);          
for (i = 0; arr[i] != '\0'; i++) {
x = arr[i];
if (x >= '0' && x <= '9') {
 num = num * 10 + (x - '0');} 
else if (x == '+' || x == '-') {
if (temp){      
    if (last_operator == '+') {
    res = res+num; } 
	else { 
    res =res- num;}
	} 
	else {
    res = num; 
    temp = 1; 
      }
num = 0; 
last_operator = x; }}
    if (temp) {
        if (last_operator == '+') {
            res =res+ num; 
    } else {
            res =res- num;}
    }
 printf("Result: %d\n", res); 

}
