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
    if (lh == -1) return -1;
    int rh = ! + maxDepth(root->right);
    if(rh == -1) return -1;
    if (abs(lh-rh)>1) return -1;

    return max(lh,rh);
}

bool isBalanced(Node* root){
    return maxDepth(root)!=-1; 
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
     
    int h = isBalanced(root1);
    if (h == 0){
        cout<<"Tree is not balanced"<<endl;
    }else{
        cout<<"Tree is balanced"<<endl;
    }
   return 0;
}