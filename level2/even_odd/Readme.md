#Problem Link
- http://14.45.117.93/30stair/even_odd/even_odd.php?pname=even_odd

#문자열 반환 방법
- 문자열 포인터를 통한 반환

```C
char *r;

char *even_odd(int x){
    char *str = malloc(sizeof(char)*20);
    if(x%2==0)
        strcpy(str,"even");
    else
       strcpy(str,"odd");
   return str; 
}
```
