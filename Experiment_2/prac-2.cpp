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
int length(Node* head) {
    int count = 0;
    Node* current = head;

    while (current != nullptr) {
        count++;
        current = current->next;
    }

    return count;
}

int main (){
    int arr[8]={2,4,5,6};
    Node *head = ConstructLL(arr,4);
    int listLength = length(head);
    cout << "\nLength of the linked list: " << listLength << endl;
}