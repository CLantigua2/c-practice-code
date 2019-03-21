#include <unistd.h>
#include <stdio.h>

int main(void)
{
    // 0 = stdin
    // 1 = stdout
    // 2 = stderr
    char buf[128];

    int bytes_read = read(STDIN_FILENO, buf, 128);

    int rv = write(STDOUT_FILENO, buf, bytes_read);

    if (rv == -1)
    {
        perror("write");
    }

    return 0;
}