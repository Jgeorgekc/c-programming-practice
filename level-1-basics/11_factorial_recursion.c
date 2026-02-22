#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    printf("Factorial=%d\n",fact(num));
    return 0;
}