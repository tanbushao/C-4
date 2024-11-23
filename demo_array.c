#include <stdio.h>
int main()
{
    //int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int a[10] = {1,2,3};//这里的10表示大小。未赋值的部分元素自动设置为0
    int data;
    //int b[10] = {0};//初始化成0
    int array[] = {100,444,55,66,77,88,99,9};
    int size;
        //把整个数组的大小，除以数组中一个元素的大小，就能获得整改个数
    size = sizeof(array)/sizeof(array[0]);//sizeof关键字，能计算括号中对应数据的内存空间大小
    printf("The number of elements in the array is:%d\n",size);
    for(data = 0; data<10; data++){
        printf("address:%p, data:%d\n",&a[data],a[data]);
    }
    return 0;
}