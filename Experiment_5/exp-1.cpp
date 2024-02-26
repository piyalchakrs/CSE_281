#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data ;
    Node*left;
    Node*right;
};
Node* createNode(int data){
    Node* newNode = new Node ();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
void InorderTraversal(Node* root){
    if (root == nullptr) return;
    InorderTraversal(root->left);
    cout<<root->data <<" ";
    InorderTraversal(root->right);
}
void PreorderTraversal(Node* root){
    if(root==nullptr) return;
    cout<< root->data <<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}
void PostorderTraversal(Node* root){
    if (root==nullptr) return;
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout<< root->data <<" ";
}
int main (){

    // Tree 1
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
    cout<<"Tree 1 :\n";
    cout<<"Inorder Traversal : ";
    InorderTraversal(root1);
    cout<<"\nPreorder Traversal : " ;
    PreorderTraversal(root1);
    cout<<"\nPostorder Traversal : ";
    PostorderTraversal(root1);
    cout << "\n\n"; 

    // Tree 2 : 
    Node* root2 = createNode(1);

    root2->left = createNode(3);

    root2->left->left = createNode(5);
    root2->left->right = createNode(2);

    root2->left->right->left = createNode(7);
    root2->left->right->left->right = createNode(9);
    root2->left->right->right = createNode(8);
    root2->left->right->right->right = createNode(13);
    root2->left->right->right->right->right = createNode(12);

    root2->left->left->right = createNode(4);
    root2->left->left->right->right = createNode(11);
     
    cout<<"Tree 2:\n";
    cout<<"Inorder Traversal: ";
    InorderTraversal(root2);
    cout<<"\nPreorder Traversal: ";
    PreorderTraversal(root2);
    cout<<"\nPostorder Traversal: ";
    PostorderTraversal(root2);
    cout<<"\n";
    return 0;

}