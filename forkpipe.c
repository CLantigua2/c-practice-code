#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0)
    {
        printf("Child!\n");
        exit(2);
    }
    else
    {
        // put parent asleep
        printf("Parent!\n");
        printf("Press RETURN to wait!\n");
        getchar();
        wait(NULL);
        printf("Press RETURN to exit!\n");
        getchar();
        // sleep(15);
    }

    return 0;
}