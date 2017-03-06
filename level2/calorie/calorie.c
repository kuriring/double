#include<stdio.h>
int buger(int x);
int drink(int x);
int side(int x);
int de(int x);
int main(int argc,char *argv[]){
    int a,b,c,d,sum=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum += buger(a);
    sum += drink(b);
    sum += side(c);
    sum += de(d);
    printf("Your total Calorie count is %d.",sum);
    return 0;
}
int buger(int x){
    if(x==1)
        return 461;
    else if(x==2)
        return 431;
    else if(x==3)
        return 420;
    else
        return 0;
}
int drink(int x){
    if(x==1)
        return 130;
    else if(x==2)
        return 160;
    else if(x==3)
       return 118;
    else
       return 0; 
}
int side(int x){
    if(x==1)
        return 100;
    else if(x==2)
        return 57;
    else if(x==3)
        return 70;
    else
        return 0;
}
int de(int x){
    if(x==1)
        return 167;
    else if(x==2)
        return 266;
    else if(x==3)
        return 75;
    else
        return 0;
}
