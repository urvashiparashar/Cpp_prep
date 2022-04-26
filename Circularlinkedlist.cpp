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
void insertnode(Node* &tail,int d,int ele)
{
    //inserting by finding if any such ele exists
    if(tail==NULL) //empty list
    {
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    //else find element and then insert
    else
    {
        Node* curr=tail; //one is presnet
        while (curr->data!=ele)
        {
            /* code */
            curr=curr->next;
        }
        //element found
        //create newnode
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
        
    }
}
void printlist(Node* &tail)
{
    Node* temp=tail; //temp pointing to tail
    do
    {
        /* code */
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    
}
void deletenode(Node* &tail,int value)
{
    //if tail is null:list empty
    if(tail==NULL)
    {
        cout<<"List is empty check again"<<endl;
        return;
    }
    else
    {
        //non-empty
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value)
       {
         prev=curr;
         curr=curr->next;
         //traversing

       }
       //value found
       prev->next=curr->next;
       //if 1 node only
       if(curr==prev)
       {
           tail=NULL;
       }
       //>=2 nodes
       else if(tail==curr)
       {
           tail=prev;
       }
       curr->next=NULL;
       delete curr;
    }
    
}
int main()
{
    Node* tail=NULL;
    insertnode(tail,5,3);
    //at first will create a node so don't matter
    insertnode(tail,4,5);
    insertnode(tail,11,4);
    deletenode(tail,11);
    deletenode(tail,5);
    deletenode(tail,4);
    printlist(tail);
    return 0;
}