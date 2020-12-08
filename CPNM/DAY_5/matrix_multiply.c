#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *m1,*m2,*m,a,b,x,y,i,j,k;
	printf("Enter the order of first matrix ");
	scanf("%d %d",&a,&b);
	printf("Enter the order of second matrix ");
	scanf("%d %d",&x,&y);
	m1=(int *)malloc(a*b*sizeof(int));
	m2=(int *)malloc(x*y*sizeof(int));
	printf("Enter the elements of the first matrix\n");
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			scanf("%d",(m1+i*b+j));
	printf("Enter the elements of the second matrix\n");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%d",(m2+i*y+j));
	if(b==x)
	{
		m=(int *)malloc(a*y*sizeof(int));
		for(i=0;i<a;i++)
		{
			for(j=0;j<y;j++)
			{
				*(m+i*y+j)=0;
				for(k=0;k<b;k++)
					*(m+i*y+j) += *(m1+i*b+k) * *(m2+k*x+j);
			}
		}
		printf("The new matrix is\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				printf("%d ",*(m+i*y+j));
			printf("\n");
		}
	}
	else
		printf("Matrix multiplication is not possible!!");
	
	free(m);
	free(m1);
	free(m2);
	return 0;
}
