#include<stdio.h>
#include<stdlib.h>

int no_of_dig(int n)
{
	int count = 0;
	while(n)
	{
		n/=10;
		count++;
	}
	return count;
}
int check_Palindrome(int n)
{
	int arr[no_of_dig(n)];
	int size = no_of_dig(n);
	int i, flag = 1;
	for(i = size-1;i>=0;i--)
	{
		arr[i] = n%10;
		n/=10;
	}
	for(i = 0;i<size/2;i++)
	{
		if(arr[i] != arr[size-1-i])
		{
			flag = 0;			
		}
	}
	return flag;	
}

int main()
{
	int n;
	printf("Enter a number to check if it is palindrome or not : ");
	scanf("%d", &n);
	if(check_Palindrome(n))
	    printf("The number is a Palindrome number");
	else
	    printf("The number is not a Palindrome number");
	return EXIT_SUCCESS;
}
