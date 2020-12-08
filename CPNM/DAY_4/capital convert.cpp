#include<stdio.h>
#include<stdlib.h>

void conv_to_caps(char* ptr){
	while(*ptr!='\0'){
		if(*ptr >='a' && *ptr<='z'){
			*ptr -=32;
		}
		ptr++;
	}
}

int main()
{
	char arr[100];
	printf("Enter a line:");
	gets(arr);
	conv_to_caps(arr);
	printf("\n%s", arr);
	return EXIT_SUCCESS;
}
