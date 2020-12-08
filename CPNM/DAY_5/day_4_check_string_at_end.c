#include<stdio.h>
#include<string.h>
#define MAX 100
int String_Check(char* t, char* s){
	int i;
	int flag = 1;
	int lim = strlen(t);
	int size = strlen(s);
	for(i = 0;t[i] != '\0';i++){
		if(t[i]!= s[size-lim+i])
		    flag = 0;		
	}
	return flag;	
}

int main(){
	char t[MAX], s[MAX];
	printf("Enter s: ");
	gets(s);
	printf("Enter t: ");
	gets(t);
	printf("%d", String_Check(t, s));
	return 0;
}
