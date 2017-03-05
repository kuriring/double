#include<stdio.h>

int main(int argc,char* argv[]){
    int thesis,element,result;
    scanf("%d %d",&thesis,&element);
    result = (thesis * element) - (thesis-1);
    printf("%d",result);
    return 0;
}
