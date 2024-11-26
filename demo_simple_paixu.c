//题目：有一个数组，里面有4个元素，这个4个元素分别为12，8，13，9.请用简单排序法将这4个数从大到小进行排序。
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

    printf("这个数组的元素从大到小排序是：");
    for(i = 0; i < len; i++){
        printf("%d ",array[i]);
    }
    return 0;
}