//pp006: Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.
#include<stdio.h>
main(){
	int *a,i;
	a= (int*) malloc(10*sizeof(int));
	printf("Enter 10 elements: \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Even numbers are: \n");
	for(i=0;i<10;i++){
	    if(a[i]%2==0)
	       printf("%d \n",a[i]);
    }
}

/*Enter 10 elements:
23
45
4
5
6
7
8
9
10
11
Even numbers are:
4
6
8
10*/
