#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int count = 0;
    int fd[2];

    pipe(fd);

    while (1)
    {
        write(fd[1], "A", 1);
        printf("byte count: %d\n", ++count);
    }

    return 0;
}