#include<stdio.h>
#include<string.h>
int main(){
	int len=0;
	char st[100];
	puts("Enter the string");
	gets(st);
	printf("%d",strlen(st));
	//without strlen function '\0' means '\n'
	while(st[len]!='\0'){
		len=len+1;
	}
	printf("\n%d",len);
}
