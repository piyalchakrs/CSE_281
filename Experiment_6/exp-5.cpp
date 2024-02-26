#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int sumOfLeftChildren(Node *root)
{
    if(root == NULL)
        return 0;
    int leftSum = 0;
    if(root->left!=NULL)
        leftSum += root->left->data;
    leftSum += sumOfLeftChildren(root->left);
    leftSum += sumOfLeftChildren(root->right);
    return leftSum;

}
int main()
{
    Node* root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->right = new Node(23);
    root->right->left = new Node(54);
    root->right->right = new Node(76);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right->right = new Node(19);
    root->right->left->right = new Node(67);
    int leftChildrenSum = sumOfLeftChildren(root);
    cout<<"Sum of left children: "<<leftChildrenSum<<endl;
    return 0;
}