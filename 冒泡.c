#include <stdio.h>
int main()
{
    int i,j,k,temp;
    int a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++){
        for(k=0;k<5-j;k++){
            if(a[k]>a[k+1]){
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}