//c语言各种数据类型及其长度

#include <stdio.h>
int main()
{
    printf("%lu\n", sizeof(char));
    //char 类型的长度，输出结果为 1 (单位为字节/B，下同)

    printf("%lu\n", sizeof(short));
    //short 类型的长度，输出结果为 2

    printf("%lu\n", sizeof(int));
    //int 类型的长度，输出结果为 4

    printf("%lu\n", sizeof(long));
    //long 类型的长度，输出结果为 8  
    //注意！！——>【在Windows环境中long的长度为4个字节，而在MacOS环境下，long的长度为8个字节，要比windows多出四个字节】
    //【在写跨平台的应用时，如果使用到long型，需要考虑到精度丢失的问题，在写跨平台应用时也尽量避免使用long型】

    printf("%lu\n", sizeof(long long));
    //long long 类型的长度，输出结果为 8

    printf("%lu\n", sizeof(float));
    //float 类型的长度，输出结果为 4

    printf("%lu\n", sizeof(double));
    //double 类型的长度，输出结果为 8

    return 0;
}