//��Ŀ����һ�����飬������4��Ԫ�أ����4��Ԫ�طֱ�Ϊ12��8��13��9.���ü����򷨽���4�����Ӵ�С��������
#include <stdio.h>

int main()
{
    int array[] = {12,8,13,9};
    int i;
    int j;
    int temp;
    int len = sizeof(array)/sizeof(array[0]);

    for(i = 0; i < len-1; i++){
        for(j = i+1; j < len; j++){
            if(array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("��������Ԫ�شӴ�С�����ǣ�");
    for(i = 0; i < len; i++){
        printf("%d ",array[i]);
    }
    return 0;
}