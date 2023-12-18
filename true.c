#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_TABLE_SIZE 100

// Define the structure for a key-value pair
typedef struct KeyValue {
    char* key;
    int value;
    struct KeyValue* next;  // Pointer to the next key-value pair in case of collision
} KeyValue;

// Define the structure for the hashmap
typedef struct HashMap {
    KeyValue* table[HASH_TABLE_SIZE];
} HashMap;

// Hash function to map a string key to an index in the hashmap
unsigned int hash(char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash * 31) + *key;
        key++;
    }
    return hash % HASH_TABLE_SIZE;
}

// Function to create a new key-value pair
KeyValue* create_pair(char* key, int value) {
    KeyValue* new_pair = (KeyValue*)malloc(sizeof(KeyValue));
    new_pair->key = strdup(key);
    new_pair->value = value;
    new_pair->next = NULL;
    return new_pair;
}

// Function to insert a key-value pair into the hashmap
void insert(HashMap* map, char* key, int value) {
    unsigned int index = hash(key);
    KeyValue* new_pair = create_pair(key, value);

    // Check if the index is empty
    if (map->table[index] == NULL) {
        map->table[index] = new_pair;
    } else {
        // Collision: add to the beginning of the linked list
        new_pair->next = map->table[index];
        map->table[index] = new_pair;
    }
}

// Function to retrieve the value associated with a key from the hashmap
int get(HashMap* map, char* key) {
    unsigned int index = hash(key);
    KeyValue* current = map->table[index];

    // Traverse the linked list at the index to find the key
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }

    // Key not found
    return -1;
}

int main() {
    HashMap map;
    // Initialize the hashmap
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        map.table[i] = NULL;
    }

    // Insert some key-value pairs
    insert(&map, "one", 1);
    insert(&map, "two", 2);
    insert(&map, "three", 3);

    // Retrieve values by key
    printf("Value for key 'one': %d\n", get(&map, "one"));
    printf("Value for key 'two': %d\n", get(&map, "two"));
    printf("Value for key 'three': %d\n", get(&map, "three"));
    printf("Value for key 'four': %d\n", get(&map, "four"));

    return 0;
}
