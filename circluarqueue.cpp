class CircularQueue{
    int *arr;
    int front,rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size=n;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1)))
           {
               //check for full
               return false;
           }
          else if(front==-1)
           {
               //first ele to push: queue was empty
               front=rear=0;
           }
           else if(rear==size-1 && front!=0)
           {
               //rear last me and front kahi bich me
               rear=0; //pointing rear to 0th index
           }
           else
           {
               //normal case: to push ele
               rear++; //increment rear
           }
           arr[rear]=value;
           return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        //check if queue is empty
        if(front==-1)
        {
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1 ; //pop ele
       
        if(front==rear)
        {
            //single ele is present
            front=-1;
            rear=-1;
        }
        else if(front==size-1)
        {
            //front is at last index of queue
            //maintain cyclic nature
            front=0;
        }
        else
        {
            //normal case
            front++;
        }
        return ans;
    }
};