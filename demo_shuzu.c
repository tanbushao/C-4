#include <stdio.h>

int main()
{
    int a[10];//这里的10表示大小
    int data;
    /*蠢
    a[0] = 100;
    a[1] = 102;
    a[2] = 1110;
    a[3] = 250
    */
    for(data = 0;data < 10;data++){
        a[data] = data+100;
        //printf("%d ",a[data]);
    }
    puts("数组初始化完毕");
    for(data = 0;data < 10; data++){
        printf("%d ",a[data]);
    }
    puts("done!");
    return 0;
}
