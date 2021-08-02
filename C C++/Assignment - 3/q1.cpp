#include <iostream>
using namespace std;
int choice = -1, i = 0, j, a[100];
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;
struct node *ins(struct node *root, int x);
struct node *del(struct node *root, int x);
struct node *newNode(int x);
void inOrder(int[], struct node *root);
struct node *minEl(struct node *root);
struct node *maxEl(struct node *root);
int main()
{
    while (choice != 7)
    {
        cout << "Enter your choice\n1.Insertion\n2.Deletion\n3.Final Sorted List arrangement\n4.Minimum element\n5.Maximum Element\n6.n'th minimum element\n7.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int x;
            cout << "Enter the Value you want to enter\n";
            cin >> x;
            root = ins(root, x);
            break;
        case 2:
            if (root == NULL)
                cout << "Empty Binary tree" << endl;
            else
            {
                int x;
                cout << "Enter the value you want to delete" << endl;
                cin >> x;
                root = del(root, x);
            }
            break;
        case 3:
            if (root == NULL)
                cout << "Empty Binary tree" << endl;
            else
            {
                cout << "The sorted list is\n";
                i = 0;
                inOrder(a, root);
                for (j = 0; j < i; j++)
                    cout << a[j] << endl;
            }
            break;
        case 4:
            if (root == NULL)
                cout << "Empty Binary tree" << endl;
            else
            {
                cout << "The minimum element is" << endl;
                cout << minEl(root)->data << endl;
            }
            break;
        case 5:
            if (root == NULL)
                cout << "Empty Binary tree" << endl;
            else
            {
                cout << "The maximum element is" << endl;
                cout << maxEl(root)->data << endl;
            }
            break;
        case 6:
            if (root == NULL)
                 cout << "Empty Binary tree" << endl;
            else
            {
                int k;
                cout << "Enter n" << endl;
                cin >> k;
                i = 0;
                inOrder(a, root);
                if (i == -1)
                    cout << "n is greater than number of elements in Binary Search Tree" << endl;
                else
                {
                    cout << "The n'th minimum element is" << endl;
                    cout << a[k - 1] << endl;
                }
            }
            break;
        case 7:
            cout << "Exiting...." << endl;
            break;
        default:
            cout << "Invalid Input";
            break;
        }
    }
}
struct node *ins(struct node *root, int x)
{
    if (root == NULL)
        return newNode(x);
    else if (x > root->data)
        root->right = ins(root->right, x);
    else
        root->left = ins(root->left, x);
    return root;
}
struct node *newNode(int x)
{
    struct node *p;
    p = new (struct node);
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void inOrder(int a[], struct node *root)
{
    if (root == NULL)
    {
        i = -1;
        return;
    }
    if (root->left != NULL)
        inOrder(a, root->left);
    a[i++] = root->data;
    if (root->right != NULL)
        inOrder(a, root->right);
}
struct node *minEl(struct node *root)
{
    if (root == NULL)
        return NULL;
    if (root->left == NULL)
        return (root);
    else
        return (minEl(root->left));
}
struct node *maxEl(struct node *root)
{
    if (root == NULL)
        return NULL;
    if (root->right == NULL)
        return (root);
    else
        return (maxEl(root->right));
}
struct node *del(struct node *root, int x)
{
    if (root == NULL)
        return NULL;
    if (x > root->data)
        root->right = del(root->right, x);
    else if (x < root->data)
        root->left = del(root->left, x);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete (root);
                        return (NULL);
        }
        else if (root->left == NULL || root->right == NULL)
        {
            struct node *temp;
            if (root->left == NULL)
                temp = root->right;
            else
                temp = root->left;
            delete (root);
            return temp;
        }
        else
        {
            struct node *temp = minEl(root->right);
            root->data = temp->data;
            root->right = del(root->right, temp->data);
        }
    }
    return root;
}