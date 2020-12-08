//C program to print fibonacci series.

#include<stdio.h>
#include<stdlib.h>
main()
{

int terms,a=0,b=1,i,next;
printf("\nEnter the number of terms in fibonacci series you want to print : ");
scanf("%d",&terms);

for(i=1;i<=terms;i++)
{
	printf("%d ",a);
	next=a+b;
	a=b;
	b=next;
}

return EXIT_SUCCESS;
}
