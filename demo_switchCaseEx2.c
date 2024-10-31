#include <stdio.h>

int main()
{
    int score;
    printf("请输入一个整数：\n");
    scanf("%d", &score);

    if (score >= 85 && score <= 100) {
        printf("A等\n");
    } else if (score >= 70 && score <= 84) {
        printf("B等\n");
    } else if (score >= 60 && score <= 69) {
        printf("C等\n");
    } else {
        printf("不及格\n");
    }

    return 0;
}