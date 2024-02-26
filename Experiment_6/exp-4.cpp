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
int getHeight(Node* root){
    if (root == nullptr) return 0;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    if (lh!=rh) return -1;
    return lh + 1;
}
bool isPerfect(Node* root){
    if(root == nullptr) return false;

    int height = getHeight(root);
    return height > 0 && ((1<< height)-1) == countNodes(root);
}
int countNodes(Node*root){
    if ( root == nullptr) return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main (){
     Node* root = createNode(50);

    root->left = createNode(17);
    root->right = createNode(72);

    root->left->left = createNode(12);
    root->left->right = createNode(23);
    root->right->left = createNode(54);
    root->right->right = createNode(76);

    root->left->left->left = createNode(9);
    root->left->left->right = createNode(14);
    root->left->right->right = createNode(19);
    root->right->left->right = createNode(67);
     
   if(isPerfect(root)){
    cout<<"The tree is perfect."<<endl;
   }else{
    cout<<"The tree is not perefect."<<endl;
   }

   return 0;
}