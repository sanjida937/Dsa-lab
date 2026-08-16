#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

int main()
{
    struct Node *root, *left, *right;

    root = malloc(sizeof(struct Node));
    left = malloc(sizeof(struct Node));
    right = malloc(sizeof(struct Node));

    printf("Enter root value: ");
    scanf("%d", &root->data);

    printf("Enter left value: ");
    scanf("%d", &left->data);

    printf("Enter right value: ");
    scanf("%d", &right->data);

    root->left = left;
    root->right = right;

    left->left = NULL;
    left->right = NULL;

    right->left = NULL;
    right->right = NULL;

    printf("\nTree:\n");
    printf("Root = %d\n", root->data);
    printf("Left = %d\n", root->left->data);
    printf("Right = %d\n", root->right->data);

    return 0;
}
