#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

struct TreeNode {
    int key;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Funções de manipulação da árvore
struct TreeNode* createNode(int key);
struct TreeNode* insert(struct TreeNode* root, int key);
struct TreeNode* removeNode(struct TreeNode* root, int key);
int search(struct TreeNode* root, int key);

// Percursos na árvore
void inorderTraversal(struct TreeNode* root);
void preorderTraversal(struct TreeNode* root);
void postorderTraversal(struct TreeNode* root);

// Mínimo e Máximo
int findMin(struct TreeNode* root);
int findMax(struct TreeNode* root);

// Libera a memória alocada pela árvore
void freeTree(struct TreeNode* root);

#endif
