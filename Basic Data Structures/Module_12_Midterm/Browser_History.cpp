#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(const string &val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, const string &S)
{
    Node *newNode = new Node(S);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string S;
    while (true)
    {
        cin >> S;
        if (S == "end")
            break;
        insert_tail(head, tail, S);
    }

    int Q;
    cin >> Q;

    return 0;
}