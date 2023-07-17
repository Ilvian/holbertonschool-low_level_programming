C - Structures, typedef

In C, structures allow you to group related data items together into a single entity. The `typedef` keyword is used to create a new type name (alias) for a structure. This can make your code more readable and easier to use.

Here's an example of how to define a structure and use `typedef`:

c
// Define the structure
struct point {
   int x;
   int y;
};

// Create a new type name for the structure
typedef struct point Point;

// Declare variables of the new type
Point p1;
Point p2;

// Access and modify structure members
p1.x = 3;
p1.y = 7;

// Use the structure in functions
void printPoint(Point p) {
   printf("x: %d, y: %d\n", p.x, p.y);
}

int main() {
   p2.x = 5;
   p2.y = 10;

   printPoint(p1);
   printPoint(p2);

   return 0;
}
In the above example, a structure named `point` is defined with two integer members `x` and `y`. Then, `typedef` is used to create a new type name `Point` for the structure.

After that, variables `p1` and `p2` are declared of type `Point`. The structure members can be accessed and modified using the dot operator (`.`).

The `printPoint` function takes a `Point` structure as a parameter and prints its members.

In the `main` function, the structure variables `p1` and `p2` are used and passed to the `printPoint` function.

Using `typedef` can make the code more concise and easier to read, especially when dealing with complex structures or when multiple instances of the structure are used.
