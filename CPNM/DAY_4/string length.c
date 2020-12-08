#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int length_of_string(char* ptr)
{
	int length = 0;
	while(*ptr!='\0')
	{
		length++;
		ptr++;
	}
	return length;
}

int main()
{
	char arr[MAX];
	printf("Enter a string: ");
	gets(arr);
	printf("\nThe lenghth of the string is : ");
	printf("%d", length_of_string(arr));
	return EXIT_SUCCESS;
}

