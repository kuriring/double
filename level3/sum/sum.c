#include<stdio.h>

int main(){
    int x,i,sum=0;
    for(i=0;i<7;i++){
        scanf("%d",&x);
        sum += x;
    }
    printf("%d",sum);
    return 0;
}
