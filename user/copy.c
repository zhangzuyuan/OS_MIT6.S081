//将控制台的内容输出到控制台

#include "kernel/types.h"
#include "user/user.h"

int
main()
{
    char buf[64];

    while (1)
    {
        //从console读入，通过system call 的read函数实现
        int n = read(0,buf,sizeof(buf));
        //没有输入就结束程序
        if( n <= 0)
            break;
        //将console 程序输入到控制台，通过system callwrite 实现
        write(1,buf,n);
        /* code */
    }
    exit(0);
    
}