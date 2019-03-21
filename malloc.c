#include <stdio.h>

int main(void)
{
    // create a pointer
    char *p;
    // memory allocate 6 bytes to it
    p = malloc(6);

    // make a string copy of p and name it "Hello"
    strcpy(p, "Hello");

    // change 3rd element into an f
    *(p + 2) = 'f';

    // makes another pointer ref to the p pointer
    char *q = p;

    // frees the space that malloc allocated
    free(q);

    return 0;
}