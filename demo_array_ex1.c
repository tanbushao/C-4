//题目：对10个数组元素依次赋值为0，1，2，3，4，5，6，7，8，9，要求按逆序输出
#include <stdio.h>
int main()
{
    int a[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    puts("数组元素依次赋值为：");
    for(i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    puts("\n按逆序输出：");
    for(i = 9; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

