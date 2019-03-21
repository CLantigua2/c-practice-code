#include <stdio.h>

int main()
{
    int tuna = 19;

    printf("Address \t Name \t Value \n");

    printf("%p \t %s \t %d \n", &tuna, "tune", tuna);

    int *pTuna = &tuna; // key has it's own memory address but the value points to tunas address

    printf("%p \t %s \t %d \n", pTuna, "tune", tuna);

    // derefrencing
    printf("\n*pTuna: %d \n", *pTuna); //derefs a pointer, basically takes the address to the pointer

    *pTuna = 19; // == tuna = 19;

    return 0;
}