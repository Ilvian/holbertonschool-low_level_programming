A doubly linked list is a type of linked list in which each node contains a data field and two pointers. These pointers link to the previous and next node in the sequence, allowing the list to be traversed in both directions. This is in contrast to a singly linked list, where each node only has a pointer to the next node, meaning it can only be traversed in one direction.

Here's how you might define a node in a doubly linked list in C:

c
Copy code
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
Here, data is the information stored in the node, next is a pointer to the next node in the sequence, and prev is a pointer to the previous node.

To traverse a doubly linked list, you might use a function like this:

c
Copy code
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}
This function prints out the data field of each node, starting from the passed node and following the next pointers until it reaches the end of the list (signified by a NULL pointer).

Doubly linked lists are more flexible than singly linked ones because they can be navigated in both directions, but they also require more memory due to the additional prev pointer. The ability to move in either direction can be useful in many applications, such as browsing back and forth in a web browser's history.
