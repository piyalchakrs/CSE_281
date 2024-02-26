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
bool isBSTUtil(Node* root , int minValue , int maxValue){
    if (root == NULL) 
          return true;
    if (root->data < minValue || root->data >maxValue) 
         return false;
    return isBSTUtil(root->left,minValue,root->data-1) &&
           isBSTUtil(root->right, root->data+1,maxValue);     

}
bool isBST(Node* root){
    return isBSTUtil(root,INT_MIN, INT_MAX);
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
     
   if(isBST(root1)){
    cout<<"The tree is a Binary Search tree."<<endl;
   }else{
    cout<<"The tree is not a Binary search tree."<<endl;
   }

   return 0;
}