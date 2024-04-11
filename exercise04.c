//计算两个整数的和
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    //定义变量要赋值完成初始化

    //输入两个数(输入一个数，空格，再输入一个数，回车)
    scanf("%d %d", &num1, &num2);

    //求和
    int sum = num1 + num2;

    //输出结果
    printf("%d\n", sum);

    return 0;
}