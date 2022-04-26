#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)//constructor
    {
        this->data=data;
        this->next=NULL; //make every node to point null
    }
    ~Node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
    
};
void insertathead(Node* &head,int d)
    {
        Node* temp=new Node(d); //creating new node
        temp->next=head;
        temp=head;
    }
    void printlist(Node* &head)
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
void insertattail(Node* &tail,int d)
{
    //creating new node
    Node* temp=new Node(d);
    //inserting at tail
    tail->next=temp;
    tail=temp;
}
void insertatposition(Node* &tail,Node* &head,int posn,int d)
{
    ///if posn=1; at start
    if(posn==1)
    {
        insertathead(head,d);
        return;
    }
    
    ///traverse for posn
    Node* temp=head; //temp points head
    int cnt=1; //starting at head

    while (cnt<posn-1)
    {
        /* code */
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }

    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

    
}

void deletenode(int posn,Node* &head)
{
    if(posn==1)
    {
        Node* temp=head;
        head=head->next;
        //memory pointer free
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node *curr=head;
        Node *prev=NULL;
        int cnt=1;
        while (cnt<posn)
        {
            /* code */
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}
int main()
{
    Node* node1=new Node(10); //stored in heap
    // cout<<n->data<<endl;
    // cout<<n->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    printlist(head);
    insertattail(tail,12);
    printlist(head);
    insertattail(tail,15);
    printlist(head);
    insertatposition(tail,head,4,22);
    printlist(head);
    cout<<"at head:"<<head->data<<endl;
    cout<<"at tail:"<<tail->data<<endl;
    deletenode(3,head);
    printlist(head);

    return 0;
}