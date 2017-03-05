#include<stdio.h>

int main(int argc,char* argv[]){
    int m,n;
    scanf("%d %d",&m,&n);
    if(m==0) 
        printf("%d !| %d",m,n);
    else if(n%m==0)
        printf("%d | %d",m,n);
    else
        printf("%d !| %d",m,n);
    return 0;
}
