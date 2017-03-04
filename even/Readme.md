#약수의 갯수가 짝수인 것 구하기
- 약수의 갯수가 짝수인 것 = 제곱수

- 제곱수 구하는 부분
'''C
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
'''
