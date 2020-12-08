#include<stdio.h>
#include<stdlib.h>
long Fact_with_Recursive(int n)
{
	if(n==0||n==1)
	    return 1;
	else
	    return n*Fact_with_Recursive(n-1);
}

long Fact_with_Iterative(int n)
{
	int i;
	long factorial = 1;
	for(i=1;i <= n;i++)
	{
		factorial *= i;		
	}
	return factorial;
}

int FactorialChoice()
{
	int choice;
	int num;
	printf("Enter 1 for Recursive method, 0 for Iterative method: ");
	scanf("%d", &choice);
	printf("Enter The number: ");
	scanf("%d", &num);
	\
	if(choice == 1)
	{
		
		printf("%lu", Fact_with_Recursive(num));
	}
	else if(choice == 0)
	{
		printf("%lu", Fact_with_Iterative(num));
	}
}

int main()
{
	FactorialChoice();
	return EXIT_SUCCESS;
}
