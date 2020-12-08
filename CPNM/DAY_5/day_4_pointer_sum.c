#include<stdio.h>
#define MAX 100
int Sum_Pointer(int*, int);

int main()
{
	int n, i;
	int arr[MAX];
	printf("Enter size: ");
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d", &arr[i]);
	}
	n = Sum_Pointer(arr, n);
	printf("\n%d", n);
	return 0;
	
}

int Sum_Pointer(int* arr, int size){
	int i;
	int sum = 0;
	for(i = 0;i<size;i++){
		sum += *(arr+i);
		printf("%d ", *(arr+i));
	}
	
	return sum;
}
	
