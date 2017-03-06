#include<stdio.h>

int main(void){
    float s;
    int w,p,flag=0;
    scanf("%f %d %d",&s,&w,&p);
    if(s<=4.5 && w>=150 && p>=200){
        flag =1;
        printf("Wide Receiver ");
    }
    if(s<=6.0 && w>=300 && p>=500){
        flag =1;
        printf("Lineman ");
    }
    if(s<=5.0 && w>=200 && p>=300){
        flag=1;
        printf("Quarterback ");
    }
    if(flag==0)
        printf("No positions");
    return 0;
}
