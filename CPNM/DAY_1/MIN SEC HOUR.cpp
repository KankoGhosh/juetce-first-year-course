//C program for converting seconds to hours,minutes and seconds.
#include<stdio.h>
#include<stdlib.h>

main()
{
	int sec,hour,min,sec_prt,min_prt;
	
	printf("\n Enter time is seconds to convert it to hours minutes and seconds : ");
	scanf("%d",&sec);	
	min=sec/60;
	sec_prt= sec%60;
	min_prt=min%60;
	hour=min/60;
	printf("\n\n%d seconds corresponds to %d hours ,%d minutes,%d seconds ",sec,hour,min_prt,sec_prt);
	return EXIT_SUCCESS;
	
}

