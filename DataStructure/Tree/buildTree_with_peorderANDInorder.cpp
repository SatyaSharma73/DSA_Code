#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node *temp = new node(curr);
    if (start == end)
    {
        return temp;
    }
    int pos = search(inorder, start, end, curr);

    temp->left = buildTree(preorder, inorder, start, pos - 1);
    temp->right = buildTree(preorder, inorder, pos + 1, end);
    return temp;
}

int main(void)
{
    int inorder[] = {4, 2, 1, 7, 5, 8, 3, 6};
    int preorder[] = {1, 2, 4, 3, 5, 7, 8, 6};

    int size = (sizeof(inorder) / sizeof(inorder[0])) - 1;

    node *root = buildTree(preorder, inorder, 0, size);
    inOrder(root);
    cout << endl;
}