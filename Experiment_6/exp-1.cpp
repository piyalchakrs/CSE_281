#include<bits\stdc++.h>

using namespace std ; 

struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data){
    Node* newNode = new Node();
    newNode -> data = data ;
    newNode -> left = newNode -> right = nullptr;
}
int maxDepth(Node* root){
    if (root == NULL) return 0;
    int lh = 1 + maxDepth(root->left);
    int rh = 1 + maxDepth(root->right);
    return max (lh,rh);
}
int main (){
     Node* root1 = createNode(50);

    root1->left = createNode(17);
    root1->right = createNode(72);

    root1->left->left = createNode(12);
    root1->left->right = createNode(23);
    root1->right->left = createNode(54);
    root1->right->right = createNode(76);

    root1->left->left->left = createNode(9);
    root1->left->left->right = createNode(14);
    root1->left->right->right = createNode(19);
    root1->right->left->right = createNode(67);
     
    int h =  maxDepth(root1);
    cout << "Heights of the tree : "<<h<<endl;

   return 0;
}