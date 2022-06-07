#include<bits/stdc++.h>
using namespace std;
class kQueue
{
    public:
    int n,k;
    int *front,*rear,*arr;
    int *next,freespot;

    public:
    kQueue(int n,int k)
    {
        this->n=n;
        this->k=k;
        front=new int[k]; //of size of queues
        rear=new int[k]; //of size of queues
        //intialisze front and rear wiht -1
        for(int i=0;i<k;i++)
        {
            front[i]=-1;
            rear[i]=-1;
        }
        //initialisze and update next
        next=new int[n]; //of array size
        for(int i=0;i<n;i++)
        {
            //next free position
            next[i]=i+1;
        }
        //last index of array
        next[n-1]=-1;
        arr=new int[n]; //array size
        freespot=0;
    }
    void enqueue(int data,int qn)
    {
        //overflow check
        if(freespot==-1)
        {
            cout<<"no empty space present"<<endl;
            return ;
        }
        //find first free index
        int index=freespot;
        //update freespot
        freespot=next[index];
        //check whether its first ele or not
        //for first ele
        if(front[qn-1]==-1)
        {
            front[qn-1]=index;
        }
        else
        {
            //link new ele to prev ele
            next[rear[qn-1]]=index;
        }
        //update next
        next[index]=-1; //pin occupied
        //update rear
        rear[qn-1]=index;
        //push element
        arr[index]=data;

    }
    int dequeue(int qn)
    {
        //check for underflow:empty
        if(front[qn-1]==-1)
        {
            cout<<"queue underflow"<<endl;
            return -1;
        }
        //find index to pop
        int index=front[qn-1];

        //front to agge badhao and link the queue element
        front[qn-1]=next[index];

        //freespots ko link kro with pop ele
        next[index]=freespot;
        freespot=index;
        return arr[index];

        
    }

};
int main()
{
    kQueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    
    return 0;
}