#include<stdio.h>
int main(){
    int n,result;
    scanf("%d",&n);
    result = n*(n-1)*(n-2)*(n-3)/24;
    printf("%d",result);
    return 0;
}
