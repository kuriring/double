#include<stdio.h>

int main(int argc,char* argv[]){
    int r,e,c,t;
    scanf("%d %d %d",&r,&e,&c);
    t = e-c;
    if(r>t)
        printf("do not advertise");
    else if(r==t)
        printf("does not matter");
    else
        printf("advertise");
    return 0;
}
