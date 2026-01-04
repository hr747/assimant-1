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
    else
    tail->next=newnode;
    tail=newnode;
}



void find(Node*hade,Node*tail)
{
    if(hade==NULL)
    {
        cout<<"0"<<endl;
        return ;
    }
int mix=hade->val;
int men=hade->val;
    for (Node *temp = hade; temp != NULL; temp = temp->next)
    {mix= max(mix,temp->val);
        men=min(men,temp->val);
        
    }
    cout<<(mix-men)<<endl;
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
find(hade,tail);


    return 0;
}