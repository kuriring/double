#include<stdio.h>
int three(int t);
int main(int argc, char*argv){
    int t;
    scanf("%d",&t);
    int result = three(t);
    if(t%2==0)
        printf("%d %d",t/2,result);
    else
        printf("%d %d",(t/2)+1,result);
    return 0;
}
int three(int t){
    int i;
    for(i=0; i<100;i++){
        if(t>(i*3))
            continue;
        else{
            return i;
        }
    }
}
