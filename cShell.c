#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    char line[8192];

    while (1)
    {
        printf(">>$ ");
        fflush(stdout);

        fgets(line, sizeof line, stdin);

        line[strlen(line) - 1] = '\0';

        if (strcmp(line, "exit") == 0)
        {
            break;
        }

        pid_t pid = fork();

        if (pid == 0)
        {
            execlp(line, line, NULL);
            perror("exec");
            exit(1);
        }
        else
        {
            wait(NULL);
        }
    }

    return 0;
}