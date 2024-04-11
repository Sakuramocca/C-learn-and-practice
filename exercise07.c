//if-else 选择语句
#include <stdio.h>
int main()
{
    int birth_year =0;
    printf("请输入您的出生年份\n");
    scanf("%d", &birth_year);//获取出生年份

    //判断是否成年
    if (2023 - birth_year >= 18)
    {
        printf("您已满18岁，可以访问\n");
    }
    else
    {
        printf("抱歉您未满18岁，无法访问\n");
    }
    return 0;
}