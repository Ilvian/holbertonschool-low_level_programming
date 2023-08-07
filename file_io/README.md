In the C programming language, File Input/Output (I/O) is a process that allows us to create, read, write, and update files. To use file I/O functions in C, you have to include the stdio.h library.

Here are some of the basic file I/O functions:

fopen(): This function is used to open a file. It returns a FILE pointer. If the file cannot be opened, it returns NULL.
fclose(): This function is used to close an already opened file.
fgetc(): This function is used to read a single character from a file.
fputc(): This function is used to write a single character to a file.
fgets(): This function is used to read a string from a file.
fputs(): This function is used to write a string to a file.
fread(): This function is used to read data from a file with a given size and count.
fwrite(): This function is used to write data into a file with a given size and count.
fseek(), ftell(), rewind(): These functions are used to move the file pointer to different positions in a file.
Here's a simple example of how to use these functions to write data to a file and then read it:

c
Copy code
#include <stdio.h>

int main() {
   FILE *fp;

   // Open file for writing
   fp = fopen("test.txt", "w");
   if (fp == NULL) {
      printf("Error opening file!\n");
      return 1;
   }

   // Write to file
   fputs("This is a test.\n", fp);

   // Close the file
   fclose(fp);

   // Open file for reading
   fp = fopen("test.txt", "r");
   if (fp == NULL) {
      printf("Error opening file!\n");
      return 1;
   }

   // Read from file
   char buffer[100];
   while (fgets(buffer, 100, fp) != NULL) {
      printf("%s", buffer);
   }

   // Close the file
   fclose(fp);

   return 0;
}
This program writes the string "This is a test." to the file test.txt, then reads the string back from the file and prints it to the console. Make sure you have the correct permissions to read/write files in the directory where you're running the program.





