#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void error_and_exit(char *msg, char *file, int code) {
    dprintf(2, "%s %s\n", msg, file);
    exit(code);
}

int main(int argc, char *argv[]) {
    char buffer[BUFFER_SIZE];
    int fd_from, fd_to;
    ssize_t count;

    if (argc != 3) error_and_exit("Usage:", "cp file_from file_to", 97);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) error_and_exit("Error: Can't read from file", argv[1], 98);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) error_and_exit("Error: Can't write to", argv[2], 99);

    while ((count = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        if (write(fd_to, buffer, count) != count) {
            close(fd_from);
            error_and_exit("Error: Can't write to", argv[2], 99);
        }
    }

    if (count == -1) error_and_exit("Error: Can't read from file", argv[1], 98);

    if (close(fd_from) == -1 || close(fd_to) == -1) error_and_exit("Error: Can't close fd", "", 100);

    return (0);
}

