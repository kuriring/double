#include<stdio.h>

int main(int argc,char* argv[]){
    int x[3],i,flag=0;
    scanf("%d %d %d",&x[0],&x[1],&x[2]);
    for(i=0;i<3;i++){
        if(x[i]<168){
            flag=1;
            printf("CRASH %d",x[i]);
            break;
        }
    }
    if(flag!=1)
        printf("NO CRASH");
    return 0;
}
