#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data)
{
    struct Node *newNode;

    newNode = malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
//in order traversal
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
//preorder traversal
void preorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
//post order traversal
void postorder(struct Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    int a, b, c;

    printf("Enter root: ");
    scanf("%d", &a);

    printf("Enter left: ");
    scanf("%d", &b);

    printf("Enter right: ");
    scanf("%d", &c);

    struct Node *root = createNode(a);

    root->left = createNode(b);
    root->right = createNode(c);

    printf("Inorder: \n");
    inorder(root);

    printf("Preorder: \n");
    preorder(root);

    printf("Postorder: \n");
    postorder(root);

}
