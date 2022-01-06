#include<stdio.h>
int main(){
	int ar[100],max,n;
	printf("Enter the number the elements:-\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the %d number\n",i+1);
		scanf("%d",&ar[i]);
		if(i==0){
			max=ar[i];
		}
		else{
			if(ar[i]>=max){
				max=ar[i];
			}
		}
	}
	printf("The maximum number is %d",max);
}
