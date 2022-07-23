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
    {
        cout << -1 << " ";
        return;
    }

    cout << root->value << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

node *buildTree()
{
    int a;
    cin >> a;

    // Base Case
    if (a == -1)
        return NULL;

    // Recursive Case
    node *newNode = new node(a);
    newNode->left = buildTree();
    newNode->right = buildTree();
    return newNode;
}

int main()
{

    node *root = buildTree();

    preOrderTraversal(root);

    return 0;
}