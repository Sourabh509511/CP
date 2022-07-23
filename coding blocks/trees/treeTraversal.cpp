#include <iostream>

using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;

    node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrderTraversal(node *root)
{
    if (!root)
        return;

    cout << root->value << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(node *root)
{
    if (!root)
        return;

    inOrderTraversal(root->left);
    cout << root->value << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
    if (!root)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->value << " ";
}

int main()
{

    node *root = NULL;

    root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(60);
    root->right->left = new node(70);

    preOrderTraversal(root);

    cout << endl;

    inOrderTraversal(root);

    cout << endl;

    postOrderTraversal(root);

    cout << endl;

    return 0;
}