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
void deleteFirstNode(Node** head) {
    if (*head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    Node* temp = *head;  
    *head = temp->next;  
    delete temp;         
}


int main (){
    int arr[8]={2,4,5,6};
    Node *head = ConstructLL(arr,4);
    deleteFirstNode(&head); 

    cout << "List after deleting the first node: ";
    TraverseList(head);

   return 0 ;
}