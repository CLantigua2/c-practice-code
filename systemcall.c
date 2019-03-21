#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

int main(void)
{

    int x = 12;

    printf("Hello!\n"); // only parent runs this

    //process id type (pid_t) is the type that fork function is
    pid_t pid = fork();

    if (pid == 0)
    {
        // stop other processes and run this, no clue what it all means though
        execlp("ls", "ls", NULL);
        // if execlp tries to run a program that doesn't exist, perror will catch it
        perror("exec");
        exit(1);
    }
    else
    {
        // wait will wait until a child process terminates before executing parent
        wait(NULL);
        printf("Parent!, pid value is %d\n", pid);
    }

    // prints hello world when the system is ready
    // write needs allocated memory, in this case we're giving it 14
    // write(1, "Hello, world!\n", 14);

    return 0;
}