#include <stdio.h>

// index into memory, contents
// index into memory: "address", "location", "pointer"
#if 0
..
200 h <-- p
201 e <-- p + 1, q
202 l
203 l
204 o
205 !
206 \0
..
#endif

int main(void)
{
    char *p;

    p = "hello!\n"; // char *

    while (*p != '\0')
    {
        putchar(*p);
        p = p + 1;
    }

    return 0;
}