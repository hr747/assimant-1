#include <bits/stdc++.h>

using namespace std;
class Node

{

public:
    int val;

    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void hade_insat(Node *&hade, int valu)
{
    Node *newnode = new Node(valu);
    newnode->next = hade;
    hade = newnode;
}
void insat_tail(Node *&hade, Node *&tail, int valu)
{
    Node *newnode = new Node(valu);
    if (hade == NULL)
    {
        hade = newnode;
        tail = newnode;
    }
    else
        tail->next = newnode;
    tail = newnode;
}
void delete_index(Node *&hade, Node *&tail, int valu)
{

    if (hade == NULL)
        return;

    if (valu == 0)
    {
        Node *delnode = hade;
        hade = hade->next;
        if (hade == NULL)
            tail = NULL;
        delete delnode;
        return;
    }

    Node *temp = hade;
    for (int i = 0; temp != NULL && i < valu - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
        return;
    Node *delnode = temp->next;
    temp->next = delnode->next;
    if (delnode == tail)
        tail = temp;
    delete delnode;
}

void print_hade(Node *hade)
{
    Node *temp = hade;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()

{
    Node *hade = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {

        int x, y;
        cin >> x >> y;
        if (x == 0)
        {
            hade_insat(hade, y);
            if (tail == NULL)
            {
                tail = hade;
            }
        }
        else if (x == 1)
        {
            insat_tail(hade, tail, y);
        }
        else if (x == 2)
        {
            delete_index(hade, tail, y);
        }
        print_hade(hade);
    }

    return 0;
}