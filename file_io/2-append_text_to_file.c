#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int append_text_to_file(const char *filename, char *text_content) {
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

    if(filename == NULL) {
        return -1;
    }

    if(access(filename, F_OK) == -1 || access(filename, W_OK) == -1) {
        return -1;
    }

    if(text_content == NULL) {
        return 1;
    }

    if(fd == -1) {
        return -1;
    }

    if(bytes_written == -1) {
        close(fd);
        return -1;
    }

    close(fd);
    return 1;
}

