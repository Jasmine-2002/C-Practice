#include <stdio.h>
int fib(int i)
{
    if(i<2){
        return i==0?0:1;
    }
    return fib(i-1)+fib(i-2);
}

int main()
{
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",fib(i));
    }
    return 0;
}