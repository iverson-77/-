#include<stdio.h>

int main(void)
{
	printf("Please enter two integers,and I will tell you which is larger");
	
	int num1;
	int num2;
	
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2){
		printf("%d is larger\n",num1,num2);
	}
	
	if(num1<num2){
		printf("%d is larger\n",num2,num1);
	}
	
	if(num1==num2){
		printf("These numbers are equal");
	} 
}
