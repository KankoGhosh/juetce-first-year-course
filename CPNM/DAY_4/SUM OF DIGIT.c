#include<stdio.h>
#include<stdlib.h>

int sum_of_digits(int n)
{
	int sum = 0;
	while(n!=0)
	{
		int dig;
		dig = n%10;
		sum+=dig;
		n/=10;
	}
	return sum;
}

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	printf("Sum of digits of %d is : %d",n, sum_of_digits(n));
	return EXIT_SUCCESS;
}
