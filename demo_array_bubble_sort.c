//题目：有一串数字：12，8，13，9，通过冒泡排序法将这些数字从大到小进行排列。

/*
//法一
#include <stdio.h>
//这是函数的返回类型，表示这个函数不返回任何值
void bubble_sort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;
            }
        }
    }
} 

int main() {
    int arr[] = {12, 8, 13, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    printf("排序前的数组：");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubble_sort(arr, n);//调用排序函数

    printf("\n排序后的数组：");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/

//法二
#include <stdio.h>

int main()
{
    int arr[] = {12, 8, 13, 9, 10, 11, 11, 11, 100};
    int i;
    int j;
    int temp;
    int len;//数组的长度
    len = sizeof(arr)/sizeof(arr[0]);

    for(i = 0; i < len-1; i++){
        for(j = 0; j < len-1-i; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr [j+1];
                arr[j+1] = temp;
            }
        }
    }

    puts("排序后的数组是：");
    for(i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
