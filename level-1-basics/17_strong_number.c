#include<stdio.h>
int fact(int n){
    int r=1;
    while(n>0){ r*=n; n--; }
    return r;
}
int main(){
    int num,temp,sum=0,d;
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        d=temp%10;
        sum+=fact(d);
        temp/=10;
    }
    if(sum==num) printf("Strong\n");
    else printf("Not Strong\n");
    return 0;
}