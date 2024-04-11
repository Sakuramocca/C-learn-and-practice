//定义变量、全局变量、局部变量

#include <stdio.h>
int a = 100; //此处定义了一个全局变量

int main()
{
    int amount = 10000; //此处定义了一个整型变量
    short age = 21; //此处定义了一个短整型变量
    float price = 32.125; //此处定义了一个单精度浮点型变量
    printf("%d\n",amount);
    printf("%d\n",age);
    printf("%f\n",price);
    
    int a = 20; //此处定义了一个局部变量
    printf("%d\n",a); //【局部优先】

    return 0;
}