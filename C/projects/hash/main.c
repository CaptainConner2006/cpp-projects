#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a key-value pair
typedef struct Node {
    char* key;
    int value;
    struct Node* next;
} Node;

// Define a hash table structure
typedef struct HashTable {
    Node** buckets;
    int size;
} HashTable;

// Hash function
unsigned int hash(const char* key, int table_size) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash * 31) + *key;  // A simple polynomial hash
        key++;
    }
    return hash % table_size;
}

// Create a new hash table
HashTable* create_table(int size) {
    HashTable* table = malloc(sizeof(HashTable));
    table->size = size;
    table->buckets = calloc(size, sizeof(Node*));
    return table;
}

// Create a new node
Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    node->key = strdup(key);
    node->value = value;
    node->next = NULL;
    return node;
}

// Insert a key-value pair
void insert(HashTable* table, const char* key, int value) {
    unsigned int index = hash(key, table->size);
    Node* new_node = create_node(key, value);
    new_node->next = table->buckets[index];
    table->buckets[index] = new_node;
}

// Search for a value by key
int search(HashTable* table, const char* key) {
    unsigned int index = hash(key, table->size);
    Node* current = table->buckets[index];
    while (current) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return -1;  // Key not found
}

// Delete a key-value pair
void delete(HashTable* table, const char* key) {
    unsigned int index = hash(key, table->size);
    Node* current = table->buckets[index];
    Node* prev = NULL;

    while (current) {
        if (strcmp(current->key, key) == 0) {
            if (prev) {
                prev->next = current->next;
            } else { 
                table->buckets[index] = current->next;
            }
      free(current->key);
      free(current);
      }
    prev = current;
    current = current->next;
  }
}

//free HashTable
void free_table(HashTable *table) {
  for(int i = 0; i < table->size; i++){
    Node *current = table->buckets[i];
    while(current){
      Node *temp = current;
      current = current->next;
      free(temp->key);
      free(temp);
    }
  }
  free(table->buckets);
  free(table);
}

//main function to use the table
int main() {
  HashTable *table = create_table(10);

  insert(table, "apple", 100);
  insert(table, "banana", 200);
  insert(table, "orange", 300);

  printf("value for apple: %d\n", search(table, "apple"));
  printf("value for banana: %d\n", search(table, "banana"));

  delete(table, "apple");
  
  printf("value for apple after deleting: %d\n", search(table, "apple"));

  free_table(table);
  return 0;
}
