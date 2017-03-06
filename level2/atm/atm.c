#include<stdio.h>
int main(int argc,char* argv[]){
    float x;
    float y;
    scanf("%f %f",&x,&y);
    if((int)x%5!=0 || (x+0.5)>y)
        printf("%0.2f",y);
    else
        printf("%0.2f",y-x-0.5);
    return 0;
}
