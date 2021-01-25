#ifndef  __CO_H__
#define  __CO_H__
/*
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
}*/
#include <ucontext.h>
#include <stdio.h>

void func1(void* arg)
{
    puts("1");
    puts("11");
    puts("111");
    puts("1111");

}
void context_test()
{
    char stack[1024 * 128];
    ucontext_t child, main;

    getcontext(&child); //��ȡ��ǰ������
    child.uc_stack.ss_sp = stack;//ָ��ջ�ռ�
    child.uc_stack.ss_size = sizeof(stack);//ָ��ջ�ռ��С
    child.uc_stack.ss_flags = 0;
    child.uc_link = &main;//���ú��������

    makecontext(&child, (void (*)(void))func1, 0);//�޸�������ָ��func1����

    swapcontext(&main, &child);//�л���child�����ģ����浱ǰ�����ĵ�main
    puts("main");//��������˺�������ģ�func1����ָ�����᷵�ش˴�
}

int main()
{
    context_test();

    return 0;
}
#endif