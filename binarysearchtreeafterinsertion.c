#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

// Create a new node with the given key
struct node* newNode(int key) {
  struct node* node = (struct node*) malloc(sizeof(struct node));
  node->key = key;
  node->left = node->right = NULL;
  return node;
}

// Insert a new key in the binary search tree
struct node* insert(struct node* node, int key) {
  if (node == NULL) {
    return newNode(key);
  }
  if (key < node->key) {
    node->left = insert(node->left, key);
  }
  else if (key > node->key) {
    node->right = insert(node->right, key);
  }
  return node;
}

// Main function to test the implementation
int main() {
  struct node *root = NULL;
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);

  printf("Binary search tree after insertion:\n");
  // You can traverse the binary search tree and print its elements
  // to see the result of the insertion operation
  // ...
  return 0;
}
