#include<stdio.h>

int main(int argc, char* argv[]){
    int timer[4],i;
    for(i=0; i<4; i++)
        scanf("%d",&timer[i]);
    int h = timer[3]/3600;
    int m = (timer[3]%3600)/60;
    int s = (timer[3]%3600)%60;
    if((timer[2]+s)>=60){
        timer[1] +=1;
        timer[2]=(timer[2]+s)-60;
    }
    else
        timer[2]+=s;
    if((timer[1]+m)>=60){
        timer[0]+=1;
        timer[1]=(timer[1]+m)-60;
    }
    else timer[1]+=m;
    if((timer[0]+h)>=24){
        timer[0]= (timer[0]+h) %24;
    }
    else
        timer[0]+=h;
    printf("%d %d %d",timer[0],timer[1],timer[2]);
    return 0;
}
