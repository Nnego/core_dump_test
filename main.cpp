#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void foo()
{
    int b = 9;
    int *ptr = &b;
    *ptr = 7;
    abort();
}

int main()
{

    cout<<"这是一个错误\n";


    foo();
//    abort();

    printf("看看我是否能打印出来\n");

    sleep(1);       // 防止进程过快退出

    return 0;
}