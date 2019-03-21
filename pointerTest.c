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

    p = "hello!"; // char *

    // p is type char *
    printf("p is %p\n", p);                    // index into memory, address, location, pointer
    printf("p points to '%c' (%d)\n", *p, *p); // *p is type char

    char *q;

    // char * + int
    q = p + 1; // pointer arithmetic

    printf("q points to '%c' (%d)\n", *q, *q); // *q is type char

    return 0;
}