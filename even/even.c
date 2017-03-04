#include<stdio.h>
int square(int a,int b);
int main(){
    int a,b,i,result,result1;
    scanf("%d %d",&a,&b);
    result = square(a,b);
    result1 = (b-a+1)-result;
    printf("%d",result1);
    return 0;
}
int square(int a,int b){
    int i,count=0;
    for(i= 1;i<1000000;i++){
        if((i*i)<=b){
            if((i*i)>=a){
                count +=1;
            }
            else
                continue;
        }
        else{
            return count;
            break;
        }
    }
}
