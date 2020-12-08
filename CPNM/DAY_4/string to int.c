#include<stdio.h>
#include<stdio.h>
#define MAX 100


long long int string_to_int(char* ptr){
	long long int number = 0;
	while(*ptr!='\0'){
		 number = number*10 + (*ptr - '0');
		 ptr++;
	}
	return number;
}

int main(){
	char arr[MAX];
	printf("Enter the string ");
	gets(arr);
    printf("\nAfter converting to integer it becomes : ");
	printf("%lu", string_to_int(arr));
	return 0;
}
