#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // 0 = stdin
    // 1 = stdout
    // 2 = stderr
    char buf[128];

    //init an array
    int fd[2];

    // create a pipe pointer to the fd arr, this will give us 0, 1, 2
    pipe(fd);

    int bytes_written = write(fd[1], "Hello, world!\n", 14);

    if (bytes_written == -1)
    {
        perror("write");
        exit(1);
    }

    int bytes_read = read(fd[0], buf, sizeof buf);

    write(STDOUT_FILENO, buf, bytes_read);

    return 0;
}