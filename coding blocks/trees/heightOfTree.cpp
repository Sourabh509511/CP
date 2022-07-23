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

node *swapSubTrees(node *root)
{
    if (!root)
        return root;

    swapSubTrees(root->left);
    swapSubTrees(root->right);
    swap(root->left, root->right);
    return root;
}

int heightOfTree(node *root)
{
    if (!root)
        return -1;

    return 1 + max(heightOfTree(root->left), heightOfTree(root->right));
}

int main()
{

    node *root = buildTree();

    cout << "Longest path " << heightOfTree(root);

    return 0;
}