#include <stdio.h>
int main(){
int a[] = {1,2,3,4,5,6,7,8,9,10};
int min = 0;      //定义min变量
int max = sizeof(a) / sizeof(a[0]) - 1;  //这里的语句是取 数组的成员数量赋给max，减1是因为数组下标是从 0开始的

while(min<max){       //如果min变量小于max变量
     int temp = a[min];    //定义个局部变量temp 赋值 a[min] 的值 
     a[min] = a[max];      //a[min]则 取 a[max]的值  相当于数组里第一位和最后一位进行调换
     a[max] = temp;        
     min++;           //第一次调换完成后 增加min的值，减少max的值，也就是第二次就是第二位和倒数第二位进行调换
     max--;            // 直到循环不成立则结束
} 
for(int i = 0;i<10;i++){
       printf("%d\t", a[i]);
        }           //遍历输出逆置后的值
return 0;
}