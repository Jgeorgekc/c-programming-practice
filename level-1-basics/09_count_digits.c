#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    if(num==0) count=1;
    while(num>0){
        count++;
        num/=10;
    }
    printf("Digits=%d\n",count);
    return 0;
}