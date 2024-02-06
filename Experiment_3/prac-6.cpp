#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *bak;
    Node(int x)
    {
        data = x;
        next = NULL;
        bak = NULL;
    }
    Node (int x, Node *f, Node *b)
    {
        data = x;
        next = f;
        bak = b;
    }
};
Node* CreateDLL(int arr[],int arrsize)
{
    Node *head = NULL, *temp = NULL, *prev = NULL;
    head = new Node(arr[0]);
    prev = head;
    for(int i = 1;i<arrsize;i++)
    {
        temp = new Node(arr[i],NULL,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void TraverseDLL(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* deleteLastNode(Node* head)
{
    if (head == nullptr)
    {
        cout << "DLL is empty. Cannot delete the last node." << endl;
        return nullptr;
    }

    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
int main()
{
    int arr[5] = {2,4,6,8,10};
    Node *head = CreateDLL(arr,5);
    TraverseDLL(head);
    head = deleteLastNode(head);
    cout << "\nDLL after deleting the last node: ";
    TraverseDLL(head);
    return 0;
}