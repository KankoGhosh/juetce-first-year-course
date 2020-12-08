#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int no_of_digits(int n){
	int count = 0;
	while(n){
		n/=10;
		count++;
	}
	return count;
}
void IntToStr(int x, char* arr){
	int dig,i;
	int size = no_of_digits(x);
	for(i=size-1;i>=0;i--){
		dig = x%10;
		arr[i] = (char)dig;
		x/=10;
	}
	arr[size] = '\0';
}
void printArr(char* arr){
	while(*arr != '\0'){
		printf("%d", *arr);
		arr++;
	}
}

int main(){
	int num;
	char arr[MAX];
	printf("Enter a number to convert it to string representation : ");
	scanf("%d", &num);
	IntToStr(num, arr);
	printf("\n\n After converting %d to string it becomes : ", num);
	printArr(arr);
	return EXIT_SUCCESS;	
}
