#include <stdio.h>
int main()
{
    //int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int a[10] = {1,2,3};//�����10��ʾ��С��δ��ֵ�Ĳ���Ԫ���Զ�����Ϊ0
    int data;
    //int b[10] = {0};//��ʼ����0
    int array[] = {100,444,55,66,77,88,99,9};
    int size;
        //����������Ĵ�С������������һ��Ԫ�صĴ�С�����ܻ�����ĸ���
    size = sizeof(array)/sizeof(array[0]);//sizeof�ؼ��֣��ܼ��������ж�Ӧ���ݵ��ڴ�ռ��С
    printf("The number of elements in the array is:%d\n",size);
    for(data = 0; data<10; data++){
        printf("address:%p, data:%d\n",&a[data],a[data]);
    }
    return 0;
}