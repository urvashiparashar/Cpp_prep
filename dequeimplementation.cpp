class Deque
{  int *arr;
 int size;
 int front,rear;
 
public:
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        size=n;
        front=rear=-1;
        arr=new int[size];
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        //from front
        //check full or not
        if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0; //front=-1;
        }
        else if(front == 0 && rear != size-1) {
            front = size-1; //front travels piche se from starting index to last one
        } 
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
        
        
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        //from rear
        if(isFull())
        {
            return false;
            
        }
        else if(isEmpty())
        {
            front=rear=0;
        }
        else if(rear == size-1 && front != 0) {
            //front is in middle kahi par and rear reached last index
            rear = 0; //circular queue
        } 
        else
        {
             rear++;
        }
        arr[rear] = x;
        return true;
        
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
         if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature backwards
        }
        else
        {//normal flow
            front++; //pop form agge se 
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[rear];
        arr[rear] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(rear == 0) {
            rear = size-1; //to maintain cyclic nature point backwards
        }
        else
        {//normal flow
            rear--; //piche se
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front==-1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        //check if queue is full or not
        if((front==0 && rear==size-1)||(front!=0 && rear==(front-1)%(size-1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};