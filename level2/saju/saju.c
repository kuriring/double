#include<stdio.h>

int main(int argc,char* argv[]){
    int y,m,d,sum=0;
    scanf("%d %d %d",&y,&m,&d);
    sum = (y+m+d)%10;
    if(sum==0)
        printf("운수대통!");
    else
        printf("노력하세요!");
    return 0;
}
