#include<stdio.h>

int main(int argc, char* argv[]){
    int price,money,result=1,i,real_result;
    scanf("%d %d",&price,&money);
    for(i=0; i<money;i++)
         result *= 10;
    int k = price%result;
    real_result = price/result;
    if(k>=(result/2))
        printf("%d",(real_result+1)*result);
    else
        printf("%d",real_result*result);
    return 0;
}
