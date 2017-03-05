#include<stdio.h>

int main(int argc,char* argv[]){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a*d)-(b*c)>0)
        printf("1"); 
    else if((a*d)-(b*c)==0)
        printf("0");
    else
        printf("-1");
    return 0;
}
