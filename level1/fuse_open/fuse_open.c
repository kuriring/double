#include<stdio.h>

int main(int argc,char* argv){
    int r1,r2,r3;
    double a1,a2,a3;
    scanf("%d %d %d",&r1,&r2,&r3);
    a1 = r1 * 2.5;
    a2 = r2 * 2.0;
    a3 = r3 * 0.5;
    int fuse =(int)(2*(a1+a2+a3))%10;
    int real_fuse = (2*(a1+a2+a3)/10);
    if(fuse==0)
        printf("%d amperes",real_fuse *10);
    else
        printf("%d amperes",(real_fuse+1)*10);
    return 0;
}
