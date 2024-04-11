//条件操作符: (exp1 ? exp2 : exp3)
//执行结果: 若 exp1 为真，则返回 exp2 的执行结果；若 exp1 为假，则返回 exp3 的执行结果
//一个简单的应用: 求两数的较大值
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;

    printf("求两数的较大值\n");
    printf("请输入两个不相同的整数\n");
    scanf("%d %d", &a, &b);

    int max = a>b ? a : b;
    printf("这两个数中较大的是%d\n", max);
    return 0;
}