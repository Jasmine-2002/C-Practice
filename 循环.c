#include <stdio.h>
int main(void)
{
   int a[5];
   int i,j,n,temp;
   for(n=0;n<5;n++){
       scanf("%d",&a[n]);
   }
   for(i=1;i<5;i++){
       temp=a[i];
       j=i-1;
       while(j>=0&&temp<a[j]){
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=temp;
   }
   for(n=0;n<5;n++){
       printf("%d\n",a[n]);
   }
    return 0;
}