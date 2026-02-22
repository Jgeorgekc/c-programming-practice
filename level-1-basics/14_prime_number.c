#include<stdio.h>
int main(){
    int num,flag=0;
    scanf("%d",&num);
    if(num<=1) flag=1;
    for(int i=2;i<num;i++){
        if(num%i==0){ flag=1; break; }
    }
    if(flag) printf("Not Prime\n");
    else printf("Prime\n");
    return 0;
}