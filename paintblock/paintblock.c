#include<stdio.h>

int main(int argc, char* argv[]){
    int w,c,h,result;
    scanf("%d %d %d",&w,&c,&h);
    result = 4*(w+c+h-6);
    printf("%d",result);
    return 0;
}
