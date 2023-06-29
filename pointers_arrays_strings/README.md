C - Pointers, arrays and strings
Pointers, arrays, and strings are fundamental concepts in the C programming language. Let's take a look at each of them individually:

1. Pointers: 
   - A pointer is a variable that holds the memory address of another variable.
   - It allows you to indirectly manipulate the value stored in a variable by accessing the memory location it points to.
   - Pointers are declared using the asterisk (*) symbol, followed by the variable name.
   - Example: 
     
c
     int *ptr;  // Declaration of an integer pointer
     int num = 10;
     ptr = &num;  // Assigning the address of 'num' to 'ptr'
     printf("%d", *ptr);  // Output: 10 (dereferencing the pointer)
     
2. Arrays: 
   - An array is a collection of elements of the same data type, stored in contiguous memory locations.
   - Arrays are declared using square brackets ([]), followed by the variable name and the size of the array.
   - Array elements are accessed using their index, starting from 0.
   - Example:
     
c
     int arr[5];  // Declaration of an integer array with size 5
     arr[0] = 10;  // Assigning a value to the first element
     printf("%d", arr[0]);  // Output: 10
     
3. Strings: 
   - In C, strings are represented as arrays of characters, terminated by a null character ('\0').
   - String literals are enclosed in double quotes (").
   - C provides a library of functions for string manipulation, such as strcpy(), strlen(), strcat(), etc.
   - Example:
     
c
     char str[10] = "Hello";  // Declaration and initialization of a string
     printf("%s", str);  // Output: Hello
     
It's important to note that arrays and strings in C are closely related, as strings are essentially character arrays. Additionally, pointers can be used to manipulate arrays and strings efficiently.
