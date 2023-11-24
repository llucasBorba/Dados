#include <stdio.h>
#include "binary_search_tree.h"

int main() {
    struct TreeNode* root = NULL;

    // Inserção
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Busca
    int valueToFind = 40;
    if (search(root, valueToFind)) {
        printf("%d está presente na árvore.\n", valueToFind);
    } else {
        printf("%d não está presente na árvore.\n", valueToFind);
    }

    // Percursos
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");

    // Mínimo e Máximo
    printf("Mínimo: %d\n", findMin(root));
    printf("Máximo: %d\n", findMax(root));

    // Remoção
    int valueToRemove = 30;
    root = removeNode(root, valueToRemove);
    printf("Árvore após remover %d: ", valueToRemove);
    inorderTraversal(root);
    printf("\n");

    // Liberar Memória
    freeTree(root);

    return 0;
}
