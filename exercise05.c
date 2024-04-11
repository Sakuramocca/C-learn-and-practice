//C语言中的常量
#include <stdio.h>


//3.#define定义的标识符常量
#define MAX 100
#define STR "helloworld"

//4.枚举常量
enum Gender
{
    MAlE,
    FEMALE,
    SECRET
};


int main()
{
    //1.字面常量
    34;   //整型常量
    2.71828;   //浮点型常量
    'a';   //字符型常量
    "hello";   //字符串型常量

    //2.const修饰的常变量
    const int a = 30;   //这里的a本质上是个变量，但具有常量的属性

    //3.标识符常量的使用
    int max = MAX;  

    //4.枚举常量的使用
    enum Gender Gender_Tom = MAlE;

    return 0;
}