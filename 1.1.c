//1.1 Write a program to input a floating number and show that number with two decimal points.
#include<stdio.h>
main(){
	float n;
	printf("enter number: "); scanf("%f",&n);
	printf("The number is %.2f",n);
}
/*enter number: 24.022233
The number is 24.02*/
