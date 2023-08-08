A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. In the context of C programming, hash tables are not built-in data structures, but you can implement them manually.

Here's an example of a simple hash table implementation in C:

c
Copy code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

typedef struct DataItem {
   int data;  
   int key;
} DataItem;

DataItem* hashArray[SIZE]; 
DataItem* dummyItem;
DataItem* item;

int hashCode(int key) {
   return key % SIZE;
}

struct DataItem *search(int key) {
   int hashIndex = hashCode(key);  
   
   while(hashArray[hashIndex] != NULL) {
  
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex]; 
      
      ++hashIndex;
      
      hashIndex %= SIZE;
   }        
   
   return NULL;        
}

void insert(int key, int data) {

   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->data = data;  
   item->key = key;

   int hashIndex = hashCode(key);

   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      ++hashIndex;
      hashIndex %= SIZE;
   }
   
   hashArray[hashIndex] = item;
}

struct DataItem* delete(struct DataItem* item) {
   int key = item->key;

   int hashIndex = hashCode(key);

   while(hashArray[hashIndex] != NULL) {
   
      if(hashArray[hashIndex]->key == key) {
         struct DataItem* temp = hashArray[hashIndex]; 
         
         hashArray[hashIndex] = dummyItem; 
         return temp;
      }
      
      ++hashIndex;
      
      hashIndex %= SIZE;
   }      
   
   return NULL;        
}

int main() {
   dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
   dummyItem->data = -1;  
   dummyItem->key = -1; 

   insert(1, 20);
   insert(2, 70);
   insert(42, 80);
   insert(4, 25);
   insert(12, 44);
   insert(14, 32);
   insert(17, 11);
   insert(13, 78);
   insert(37, 97);

   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }

   delete(item);
   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }
}
In the above code:

A hash function hashCode is used to map keys to array indices.
insert, search and delete are the main functions that provide the functionality of the hash table.
In insert, if a collision occurs (two keys have same hash), it uses linear probing to find an empty slot.
In search and delete, it also uses linear probing to find the key.
A dummyItem is used to mark deleted cells.
The main function demonstrates the insertion of key-value pairs, searching for a key, and deleting a key-value pair.
Please note that this implementation is just for educational purposes and it's not suitable for use in production code. It lacks error checks, doesn't support dynamic resizing, and uses a simple hash function that can lead to collisions in a real-world scenario.
