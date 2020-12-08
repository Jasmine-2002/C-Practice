#include <stdio.h>
int insort(int s[], int n)    
{
    int i,j;
    for(i=2;i<=n;i++)    //数组下标从2开始，s[0]做监视哨，s[1]一个数据无可比性
    {
        s[0]=s[i];    //给监视哨陚值
        j=i-1;    //确定要比较元素的最右边位黄
        while(s[0]<s[j])
        {
            s[j+1]=s[j];    //数据右移
            j--;    //产移向左边一个未比较的数
        }
        s[j+1]=s[0];    //在确定的位置插入s[i]
    }
    return 0;
}

int main()
{
    int a[11],i;  
    for (i =1;i<=10;i++)
        scanf("%d",&a[i]);    
    insort(a,10); 
    for(i=1;i<11;i++)
        printf("%d\n",a[i]); 
    return 0;
}