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

int countOfNodes(node *root)
{
    if (!root)
        return 0;

    return 1 + countOfNodes(root->left) + countOfNodes(root->right);
}

int main()
{

    node *root = buildTree();

    cout << "Count of nodes is " << countOfNodes(root);

    return 0;
}