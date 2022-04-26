#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int d)
    {
       this->data=d;
       this->next=NULL;
       this->prev=NULL;
    }
    ~Node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for value "<<val<<endl;
    }
};
void printlist(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
    
}
int length(Node* head)
{
    Node* temp=head;
    int len=0;
    while (temp!=NULL)
    {
        len++;
        temp=temp->next;

    }
    return len;
    
}
void insertathead(Node* &head,Node* &tail,int d)
{
     if(head==NULL)
     {
         Node* temp=new Node(d);
         head=temp;
         tail=temp;
     }
     else
     {
     Node* temp=new Node(d);
     temp->next=head;
     head->prev=temp;
     head=temp;
     }
}
void insertattail(Node* &head,Node* &tail,int d)
{
     if(tail==NULL)
     {
         Node* temp=new Node(d);
         head=temp;
         tail=temp;
     }
     else
     {
     Node* temp=new Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
     }
}
void insertatposition(Node* &tail,Node* &head,int d,int pos)
{
    if(pos==1)
    {
        insertathead(head,tail,d);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while (cnt<pos-1)
    {
        /* code */
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(head,tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
    
}
void deletenode(Node* &head,int pos)
{
     if(pos==1)
     {
         Node* temp=head;
         temp->next->prev=NULL;
         head=temp->next;
         temp->next=NULL;
         delete temp;
     }
     else
     {
         Node* curr=head;
         Node* prev=NULL;
         int cnt=1;
         while (cnt<pos)
         {
             /* code */
             prev=curr;
             curr=curr->next; //for travesring
             cnt++;
         }
         curr->prev=NULL;
         prev->next=curr->next;
         curr->next=NULL;
         delete curr;
     }
}
int main()
{
    // Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    printlist(head);
    // cout<<length(head);
    insertathead(head,tail,12);
    insertathead(head,tail,13);
    printlist(head);
    insertattail(head,tail,25);
    printlist(head);
    insertatposition(tail,head,35,4);
    insertatposition(tail,head,24,1);
    printlist(head);
    deletenode(head,3);
    deletenode(head,1);
    printlist(head);
    return 0;
}