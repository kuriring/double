#include<stdio.h>

int main(){
   int n,i,flr=1;
   scanf("%d",&n);
   for(i=0;i<2147483647;i++){
        if(flr>n){
            printf("%d",i);
            break;
        }
        else
            flr *=2;
   }
   return 0;
}
