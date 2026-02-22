#include<stdio.h>
int main(){
    int num,temp,rev=0,d;
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        d=temp%10;
        rev=rev*10+d;
        temp/=10;
    }
    printf("Reverse=%d\n",rev);
    return 0;
}