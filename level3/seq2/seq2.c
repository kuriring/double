#include<stdio.h>

int main(){
    int x,sum=0,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        sum += i;
    printf("1..%d %d",x,sum);
    return 0;
}
