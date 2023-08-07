#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: input
 * @text_content: input
 * Return: Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content) {
	int fd = open(filename, O_WRONLY | O_APPEND);
    if (!filename) return -1;  

    if (fd == -1) return -1;   

    if (text_content != NULL) {
        if (write(fd, text_content, strlen(text_content)) == -1) {  
            close(fd);
            return -1;   
        }
    }

    close(fd);   
    return 1;    
}

