#include <stdio.h>
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int data;

    for(data = 0; data<10; data++){
        printf("address£º%p, data£º%d\n",&a[data],a[data]);
    }
    return 0;
}