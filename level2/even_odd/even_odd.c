#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *even_odd(int x);
int main(int argc,char* argv[]){
    int x,y;
    char *r,*r1,*r2,*r3;
    scanf("%d %d",&x,&y);
    r = even_odd(x);
    r1 = even_odd(y);
    r2 = even_odd(x+y);
    r3 = even_odd(x*y);
    printf("%s+%s=%s\n",r,r1,r2);
    printf("%s*%s=%s",r,r1,r3);
    return 0;
}
char *even_odd(int x){
    char *str = malloc(sizeof(char)*20);
    if(x%2==0)
        strcpy(str,"even");
    else
       strcpy(str,"odd");
   return str; 
}
