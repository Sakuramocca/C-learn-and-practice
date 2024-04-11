//字符串
#include <stdio.h>
#include <string.h>

int main()
{
    //1.用数组存储一串字符串
    char arr1[] = "abcde";
    char arr2[] = {'a','b','c','d','e','\0'};   //7,8两行代码等价
   
    printf("%s\n",arr1);
    printf("%s\n",arr2);

    //2.用strlen()函数求字符串长度（使用前必须包含头文件<string.h>）
    int length_1 = strlen(arr1);
    int length_2 = strlen(arr2);    //需要创建整型变量接收返回值

    printf("The length of arr1 is %d\n", length_1);
    printf("The length of arr2 is %d\n", length_2);

    return 0;
}