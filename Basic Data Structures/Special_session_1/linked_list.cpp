#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

Node (int val){
    this->val=val;
    this->next=NULL;
}    
};

void insert_at_head(Node * &head,int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node * &head,int v){
    Node * newNode = new Node(v);
    Node *temp = head;

    if(head == NULL){
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    cout<<temp->val <<endl;

}
void print(Node*head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<< "->";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insert_at_head(head,10);
    insert_at_head(head,20);
    print(head);
    insert_at_tail(head,50);
    print(head);

    return 0;
}