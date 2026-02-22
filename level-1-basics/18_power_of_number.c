#include<stdio.h>
int main(){
    int base,power,res=1;
    scanf("%d %d",&base,&power);
    for(int i=1;i<=power;i++)
        res*=base;
    printf("Result=%d\n",res);
    return 0;
}