#include<stdio.h>

int main(int argc,char* argv[]){
    int input[4];
    for(int i=0; i<4; i++) 
        scanf("%d",&input[i]);
    int benefit = input[1] - input[0];
    int result =(input[1] + input[3]) - input[2];
    int result1 =input[0]+input[3];
    int final_result = result1-result;
    printf("%d",final_result);
    return 0;
}
