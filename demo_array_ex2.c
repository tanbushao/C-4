//题目：菲波那契数列：1，1，2，3，5，8，13，21，34，55，89，144，233，...这个数列从第3项开始 ，每一项都等于前两项之和。表达式：F(n)=F(n−1)+F(n−2), n≥3。这是一个线性递推数列。
//要求：输出这个数列的前30项

//法一：
#include <stdio.h>
int main()
{
    int a[30] = {1,1};//初始化前两项
    int i;
    //从第三个数开始，每个数都是前两个数之和
    for(i = 2; i < 30; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    puts("菲波那契数列的前30项为：");
    for(i = 0; i < 30; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

/*
//法二：
#include <stdio.h>
int main()
{
    int a[30];
    int i;
    int arrySize;
    arrySize = sizeof(a) / sizeof(a[0]);
    //初始化前两项
    a[0] = 1;
    a[1] = 1;
    //从第三个数开始，每个数都是前两个数之和
    for(i = 2; i < arrySize; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    puts("菲波那契数列的前30项为：");
    for(i = 0; i < arrySize; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
*/