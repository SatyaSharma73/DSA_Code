#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

node *buildtree(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;

    if (start > end)
    {
        return NULL;
    }
    int val = postorder[idx];
    idx--;
    node *temp = new node(val);
    if (start == end)
    {
        return temp;
    }
    int pos = search(inorder, start, end, val);
    temp->right = buildtree(postorder, inorder, pos + 1, end);
    temp->left = buildtree(postorder, inorder, start, pos - 1);
    return temp;
}

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
int main(void)
{
    int inorder[] = {4, 8, 2, 5, 1, 6, 3, 7};
    int postorder[] = {8, 4, 5, 2, 6, 7, 3, 1};

    int size = (sizeof(inorder) / sizeof(inorder[0])) - 1;
    node *root = buildtree(postorder, inorder, 0, size);
    inOrder(root);
}