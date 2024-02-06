#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node* constructLL(int arr[],int arrsize)
{
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<arrsize; i++)
    {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}
void TraverseList(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* insertAtK(Node* head, int k, int element)
{
    Node* newNode = new Node(element);
    if(k==1)
    {
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    int cnt = 1;
    while(temp!=NULL && cnt<k-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp==NULL)
    {
        cout<<"Invalid position.Element not inserted."<<endl;
        delete newNode;
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
int main()
{
    int arr[10] = {2,4,6,8,10};
    Node *head = constructLL(arr,5);
    TraverseList(head);
    int k, element;
    cout<<"\nEnter position to insert (1 to N+1): ";
    cin>>k;
    if(k<1 || k>6)
    {
        cout<<"Invalid position. Exiting program."<<endl;
        return 1;
    }
    cout << "Enter element to insert: ";
    cin >> element;
    head = insertAtK(head,k,element);
    cout<<"Linked List after insertion: ";
    TraverseList(head);
    return 0;
}
