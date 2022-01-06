#include<stdio.h>
#include<string.h>
int main(){
	char st[100];
	puts("Enter the String\n");
	gets(st);
	for(int i=0;i<strlen(st);i++){
		if(st[i] != ' '){
			if((int)st[i] <=90 && (int)st[i]>=65){
				st[i]=(char) (int(st[i])+32);	
			}
		}
		printf("%c",st[i]);
	}
}
