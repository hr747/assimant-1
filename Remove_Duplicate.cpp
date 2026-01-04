#include <bits/stdc++.h>

using namespace std;
class Node

{

 public:

 int val;

 Node* next;

 Node(int val)
 {
 this->val=val;
 this->next=NULL; 

 }

};
void insat_tail(Node*&hade,Node*&tail,int valu)
{ 
    Node* newnode=new Node(valu);
    if(hade==NULL)
    {
        hade=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}

void remove(Node* head, Node* tail) {
    for (Node* temp = head; temp != NULL; temp = temp->next) {
        Node* demp = temp;
        while (demp->next != NULL) {
            if (demp->next->val == temp->val) {
                Node* del = demp->next;
                demp->next = demp->next->next;
                delete del;
            } else {
                demp = demp->next;
            }
        }
    }
}


void print(Node*hade)
{
    Node*temp=hade;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    
}


 int main()

{
    Node*hade=NULL;
    Node*tail=NULL;
int valu;
while (1)
{
    /* code */
    cin>>valu;
    if(valu==-1)
    { break;
    
    }
    insat_tail(hade,tail,valu);
}
remove(hade,tail);
print(hade);

    return 0;
}