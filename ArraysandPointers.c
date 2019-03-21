#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    int meatBalls[5] = {7, 9, 43, 21, 3};

    printf("Element \t Address \t Value \n");

    for (i = 0; i < 5; i++)
    {
        printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
    }

    //points to the first elements address in the array
    printf("\nmeatBalls\t %p \n ", meatBalls); // => prints address to first item

    //derefrence meatballs and get the value instead of address
    printf("\nmeatBalls\t %d \n ", *meatBalls); // => prints 7

    // moves through the derefrenced array to find the 3rd item in the array
    printf("\n*(meatBalls+2)\t %d \n ", *(meatBalls + 2)); // => prints 43
}