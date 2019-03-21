#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char buf[128];

    // fd[0] will be the read end of the pipe
    // fd[1] will be the write end of the pipe
    int fd[2];

    // Create the pipe and populate `fd`
    pipe(fd);

    // This is where you'd fork() it you want to do
    // interprocess-communciation.

    // Send data down the pipe
    int bytes_written = write(fd[1], "Hello, world!\n", 14);

    if (bytes_written == -1)
    {
        perror("write");
        exit(1);
    }

    // Read data from the pipe
    int bytes_read = read(fd[0], buf, sizeof buf);

    // Write the data to the screen
    write(STDOUT_FILENO, buf, bytes_read);

    return 0;
}