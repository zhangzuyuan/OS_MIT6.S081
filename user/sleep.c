#include "kernel/types.h"
#include "user/user.h"

int main(int argn, char *argv[]){
    //如果输入的参数不是两个，就异常退出
    if(argn !=2){
        fprintf(2,"must 1 argument for sleep\n");
        //异常退出
        exit(1);
    }
    //进行sleep操作
    int sleepNum = atoi(argv[1]);
    printf("(nothing happens for a little while)\n");
    sleep(sleepNum);
    //正常退出
    exit(0);
}