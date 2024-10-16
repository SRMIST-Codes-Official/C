#include <stdio.h>
#include <stdlib.h>

// Node structure for the BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the BST
struct Node* insert(struct Node* root, int data) {
    // If the tree is empty, return a new node
    if (root == NULL) {
        return createNode(data);
    }

    // Otherwise, recur down the tree
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    // Return the unchanged node pointer
    return root;
}

// Function to perform in-order traversal
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to search for a given key in the BST
struct Node* search(struct Node* root, int key) {
    // Base cases: root is null or key is present at root
    if (root == NULL || root->data == key) {
        return root;
    }

    // Key is greater than root's key
    if (key > root->data) {
        return search(root->right, key);
    }

    // Key is smaller than root's key
    return search(root->left, key);
}

int main() {
    struct Node* root = NULL;
    int choice, data, key;
    struct Node* result;

    while (1) {
        printf("\n1. Insert\n2. In-order Traversal\n3. Search\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;

            case 2:
                printf("In-order Traversal: ");
                inOrderTraversal(root);
                printf("\n");
                break;

            case 3:
                printf("Enter the value to search: ");
                scanf("%d", &key);
                result = search(root, key);
                if (result != NULL) {
                    printf("Element %d is present in the tree.\n", key);
                } else {
                    printf("Element %d is not found in the tree.\n", key);
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
