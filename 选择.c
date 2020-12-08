#include <stdio.h>
int main()
{
    int i,j,k,temp;
    int a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++){
        for(k=j+1;k<5;k++){
            if(a[j]>a[k]){
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
