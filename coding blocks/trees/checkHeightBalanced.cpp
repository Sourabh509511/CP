#include <iostream>
#include <cmath>
#define pbi pair<bool, int>

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

int heightOfTree(node *root)
{
    if (!root)
        return -1;

    return 1 + max(heightOfTree(root->left), heightOfTree(root->right));
}

// T.C. O(n^2)
bool isBalanced(node *root)
{
    if (!root)
        return true;

    bool isLeftBalanced = isBalanced(root->left);
    if (!isLeftBalanced)
        return false;

    bool isRightBalanced = isBalanced(root->right);
    if (!isRightBalanced)
        return false;

    bool isCurrentBalanced = abs(heightOfTree(root->left) - heightOfTree(root->right)) <= 1;
    return isLeftBalanced && isRightBalanced && isCurrentBalanced;
}

// T.C. O(n), pair.first = Is current root balanced
//  pair.second = height of current node
pbi optimizedIsHeightBalanced(node *root)
{
    if (!root)
    {
        pbi(true, -1);
    }

    pbi pl = optimizedIsHeightBalanced(root->left);

    pbi pr = optimizedIsHeightBalanced(root->right);

    bool isCurrentBalanced = abs(pl.second - pr.second) <= 1;

    pbi p;
    p.first = pl.first && pr.second && isCurrentBalanced;
    p.second = 1 + max(pl.second, pr.second);
    return p;
}

int main()
{

    node *root = buildTree();

    cout << "Tree is balanced or not " << isBalanced(root) << endl;
    cout << "Tree is balanced or not using optimised approach " << optimizedIsHeightBalanced(root).first << endl;

    return 0;
}