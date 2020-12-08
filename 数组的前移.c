#include<stdio.h>

int main()
{
    int a[10], i, t;
    for(i = 0; i < 10; i++)
    	scanf("%d", &a[i]);
    for(i = 0; i < 9; i++)
    {
        t = a[i];
        a[i] = a[i+1];
        a[i+1] = t;
    }
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}