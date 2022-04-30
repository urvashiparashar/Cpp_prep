// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cout<<"enter head data:"<<endl;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cout<<"enter the following value:"<<endl;
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev; //head
    }
    
    void insertattail(struct Node* &head,struct Node* &tail,int val )
    {
        Node* temp=new Node(val);
        //empty list
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* add(struct Node* first, struct Node* second)
    {
        // code here
        Node* anshead=NULL;
        Node* anstail=NULL;
        
        int carry=0;
        // while(first!=NULL && second!=NULL)
        // {
        //     int sum=carry+first->data+second->data;
        //     int digit=sum%10;
            
        //     insertattail(anshead,anstail,digit);
        //     carry=sum/10;
        //     first=first->next;
        //     second=second->next;
            
        // }
        
        // //first LL over
        // while(first!=NULL) //first is long
        // {
        //     int sum=carry+first->data;
        //     int digit=sum%10;
            
        //     insertattail(anshead,anstail,digit);
        //     carry=sum/10;
        //     first=first->next;
        // }
        // //second LL over
        // while(second!=NULL) //first is long
        // {
        //     int sum=carry+second->data;
        //     int digit=sum%10;
            
        //     insertattail(anshead,anstail,digit);
        //     carry=sum/10;
        //     second=second->next;
        // }
        
        // //both equal length
        // while(carry!=0)
        // {
        //     int sum=carry;
        //     int digit=sum%10;
        //     insertattail(anshead,anstail,digit);
        //     carry=sum/10;
        // }
        // return anshead;
        while(first!=NULL || second!=NULL || carry!=0)
        {
            int val1=0; //for carry
            if(first!=NULL)
             val1=first->data;
            int val2=0;
            if(second!=NULL)
              val2=second->data;
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            //create node and add in answer Linked List
            insertattail(anshead, anstail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return anshead;
        
    }
    struct Node* addTwoLists(struct Node* first,struct Node* second)
    {
        //reversing both ll
        first=reverse(first);
        second=reverse(second);
        //add ll
        Node* ans=add(first,second);
        //reverse ans list
        ans=reverse(ans);
        
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cout<<"\n enter no.of lists:"<<endl;
    cin>>t;
    while(t--)
    {
        int n, m;
        cout<<"enter length of list 1:"<<endl;
        cin>>n;
        Node* first = buildList(n);
        cout<<"enter length of list 2:"<<endl;
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends