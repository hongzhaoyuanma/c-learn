#ifndef  __COROUTINE_H__
#define  __COROUTINE_H__

#include <stdio.h>
#include <ucontext.h>
#include <unistd.h>

int main(int argc, const char* argv[]) {
    ucontext_t context;

    getcontext(&context);
    puts("Hello world");
    sleep(1);
    setcontext(&context);
    return 0;
}

#endif