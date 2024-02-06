#include<iostream>

using namespace std;

struct Node{
    int data ;
    Node *next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
Node* ConstructLL(int arr[],int arrsize){
    Node *head = new Node(arr[0]);
    Node *current = head;

    for (int i=1;i<arrsize;i++){
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}
void TraverseList( Node *head){
    while(head!= nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* deleteLastNode(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;

    return head;
}
int main (){
    int arr[8]={2,4,5,6};
    Node *head = ConstructLL(arr,4);
    head = deleteLastNode(head);
    TraverseList(head);
    return 0 ;
}