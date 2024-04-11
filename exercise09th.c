//一些简单的操作符（运算符）
#include <stdio.h>
int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int a = 10;
    int b = 4;
    float c = 4.0;

    //1.+（加），-（减），*（乘），/（求商），%（求余数/模）
    int sum = a + b;//求和
    int difference = a - b;//求差
    int product = a * b;//求积
    int quotient_1 = a / b;//求整数商
    float quotient_2 = a / c;//求浮点数商
    int reminder = a % b;//求余数


    //2.+=，-=，*=，/=，%=
    int d = 20;
    int e = 30;
    d += 5;//等价于 d = d + 5,  减、乘、除、模同理
    e -= 2;


    //3.sizeof:单目操作符，以字节为单位计算数据类型所占内存大小
    int aa = sizeof(int);
    int bb = sizeof(float);
    int cc = sizeof(arr);//计算整个数组大小
    int dd = sizeof(arr[2]);//计算数组中某个元素的大小


    //4.前置++和前置--:先计算++或--，再使用
    int frontplusplus = ++a;//先 a = a + 1 a变为11，再进行赋值 此时变量fpp为11
    int frontminusminus = --a;//先 a = a - 1 a变为10，再进行赋值 此时变量fmm为10
    printf("%d\n", frontplusplus);
    printf("%d\n", frontminusminus);


    //5.后置++和后置--:先使用，再计算++或--
    int backplusplus = b++;//先进行赋值 此时变量bpp为4, 再b = b + 1 b变为5，
    int backminusminus = b--;//先进行赋值 此时变量bmm为5, 再b = b - 1 b变为4，
    printf("%d\n", backplusplus);
    printf("%d\n", backminusminus);


    return 0;
}