#include <stdio.h>

int main()
{
    // char is a constant, it can not be changed
    char movie1[] = "The Return of Carlos!";

    // this pointer isn't saving the values, it's saving a pointer to where the values are in memory
    // this is not a constant so you can CAN change it
    char *movie2 = "Carlos is awesome I love Ham!";

    // put starts at the beginning of the pointer and prints until it hits null
    puts(movie2); // prints "Carlos is awesome I love Ham!"

    // change the pointers char values
    movie2 = "New movie title";

    // print the new values
    puts(movie2);

    return 0;
}