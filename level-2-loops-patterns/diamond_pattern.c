#include<stdio.h>
int main(){

	int num = 5;
	for(int i = 0;i<num;i++){
	
		for(int j =0 ;j < num - i -1;j++)
		{
			printf(" ");
		}
		for(int k = 0 ; k < 2 * i - 1;k++)
		{
			printf("*");
		}
		printf("\n");

	}
	for(int i = num -2 ;i >= 0;i--){
	
		for(int j =0 ;j < num - i -1;j++)
		{
			printf(" ");
		}
		for(int k = 0 ; k < 2 * i - 1;k++)
		{
			printf("*");
		}
		printf("\n");

	}
}
