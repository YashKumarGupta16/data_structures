#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the binary tree (first left, then right)
struct TreeNode* insertNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (root->left == NULL) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// Function to perform in-order traversal of the binary tree
void inOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to free the memory allocated for the binary tree
void freeTree(struct TreeNode* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int nodeValue;
    char choice;

    // User input loop to insert nodes into the binary tree
    do {
        printf("Input a value to insert into the binary tree (0 to stop): ");
        scanf("%d", &nodeValue);

        if (nodeValue != 0) {
            root = insertNode(root, nodeValue);
        }

        printf("Want to insert another node? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Display the in-order traversal of the binary tree
    printf("\nIn-order Traversal of the Binary Tree: ");
    inOrderTraversal(root);
    printf("\n");

    // Free allocated memory for the binary tree
    freeTree(root);

    return 0;
}
