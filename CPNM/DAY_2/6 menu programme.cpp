#include<stdio.h>
#include<stdlib.h>
#include <math.h>

long long convertDecimalToBinary(int n);
int convertBinaryToDecimal(long long n);
int convertBinarytoOctal(long long binaryNumber);
long long convertOctalToBinary(int octalNumber);
long long convertOctalToDecimal(int octalNumber);
int convertDecimalToOctal(int decimalNumber);

main()
{
	int optn;
	long long p;
	int n;
	long long binaryNumber;
	int octalNumber;
	long int octal, decimal = 0;
    int i = 0;
    int octalNumber_1;
    int decimalNumber;
    
	
	printf("\nEnter Your choice and Press Enter : ");
	printf("\nEnter 1 for converting BINARY TO DECIMAL");
	printf("\nEnter 2 for converting DECIMAL TO BINARY");
	printf("\nEnter 3 for converting OCTAL TO BINARY");
	printf("\nEnter 4 for converting BINARY TO OCTAL");
	printf("\nEnter 5 for converting OCTAL TO DECIMAL");
	printf("\nEnter 6 for converting DECIMAL TO OCTAL");
	printf("\nEnter Your Choice : ");
	
	
	scanf("%d",&optn);
	
	switch(optn)
	{
		
		case 1 : 
                 printf("Enter a binary number: ");
                 scanf("%lld", &n);
                 printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
                 break;
        case 2 : 
                 printf("Enter a decimal number: ");
                 scanf("%d", &p);
                 printf("%d in decimal = %lld in binary", p, convertDecimalToBinary(p));
                 break;
		
		case 3 : printf("Enter a binary number: ");
                 scanf("%lld", &binaryNumber);
                 printf("%lld in binary = %d in octal", binaryNumber, convertBinarytoOctal(binaryNumber));
				 break;
				 
		case 4 : printf("Enter an octal number: ");
                 scanf("%d", &octalNumber);
                 printf("%d in octal = %lld in binary", octalNumber, convertOctalToBinary(octalNumber));	
				 break;	
				 
		case 5 : printf("Enter an octal number: ");
                 scanf("%d", &octalNumber_1);
                 printf("%d in octal = %lld in decimal", octalNumber_1, convertOctalToDecimal(octalNumber_1));
                 break;
                 
        case 6 : printf("Enter a decimal number: ");
                 scanf("%d", &decimalNumber);
                 printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));
				 break;         
	}

return EXIT_SUCCESS ;
}


long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int convertBinaryToDecimal(long long p)
{
    int decimalNumber = 0, i = 0, remainder;
    while (p!=0)
    {
        remainder = p%10;
        p /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;
    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}

long long convertOctalToDecimal(int octalNumber_1)
{
    int decimalNumber = 0, i = 0;
    while(octalNumber_1 != 0)
    {
        decimalNumber += (octalNumber_1%10) * pow(8,i);
        ++i;
        octalNumber_1/=10;
    }
    i = 1;
    return decimalNumber;
}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}





