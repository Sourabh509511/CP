#include <iostream>
#define pii pair<int, int>

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
// T.C. O(n^2)
int heightOfTree(node *root)
{
    if (!root)
        return -1;

    return 1 + max(heightOfTree(root->left), heightOfTree(root->right));
}

int computeDiameter(node *root)
{
    if (!root)
        return 0;

    int leftDiameter = computeDiameter(root->left);
    int rightDiameter = computeDiameter(root->right);
    int height = 2 + heightOfTree(root->left) + heightOfTree(root->right);
    return max(leftDiameter, max(rightDiameter, height));
}

// T.C. O(n)
// pii.first = maximum diameter of current node
// pii.second = maximum height of current node
pii optimisedComputeDiameter(node *root)
{
    if (!root)
        return pii(0, -1);

    pii leftDiameter = optimisedComputeDiameter(root->left);
    pii rightDiameter = optimisedComputeDiameter(root->right);
    int height = 2 + leftDiameter.second + rightDiameter.second;
    return pii(max(leftDiameter.first, max(rightDiameter.first, height)), 1 + max(leftDiameter.first, rightDiameter.first));
}

int main()
{

    node *root = NULL;

    root = buildTree();

    cout << computeDiameter(root) << endl;

    cout << optimisedComputeDiameter(root).first << endl;

    return 0;
}