#include <stdio.h>

int main(void)
{
    int a = 12;
    int *p = NULL;

    printf("%p\n", p); // 0x0 NULL

    p = &a; // &a "address of a" "pointer to a"

    printf("%p\n", p); // address of a

    printf("*p is %d\n", *p); // 12

    *p = 99; // the thing p points at = 99

    printf("a is %d\n", a); // ???

    return 0;
}