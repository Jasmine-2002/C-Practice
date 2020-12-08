#include <stdio.h>
void quitsort(int* a,int low,int high)
{
    int j=low;
    int k=high;
    int key=a[0];
    if(low>=high){
        return;
    }
    while(low<high)
    {
        while(low<high&&key<=high)
        {
            high--;
        }
        if(key>high)
        {
            a[low]=a[high];
            low++;
        }
        while(low<high&&key>=low)
        {
            low++;
        }
        if(key<a[low])
        {
            a[high]=a[low];
            high--;
        }
    }
    a[low]=key;
    quitsort(a,j,low-1);
    quitsort(a,low+1,k);
}

int main()
{
    int i;
    int a[10]={23,5,17,55,4,30,20,6,45,98};
    quitsort(a,0,9);
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}