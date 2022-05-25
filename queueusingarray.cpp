class Queue {
    int *arr;
    int qfront,rear,size;
    
public:
    Queue() {
        // Implement the Constructor
        size=100001;
        qfront=0;
        rear=0;
        arr=new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear) //no ele inserted
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        //push/insert
        //check for full queue
        if(rear==size)
            cout<<"Queue is full"<<endl;
        else
        {
            //push ele
           arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        //pop ele
        //check for empty
        if(qfront==rear)
        {
            return -1;
        }
        else
        {
            int ans=arr[qfront]; //to print ans;
            arr[qfront]=-1;
            qfront++; //aage se delete hoga ele
            //arises
            if(qfront==rear)
            {
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        //to print front ele always
        if(qfront==rear)
            return -1;
        else
        {
            return arr[qfront];
        }
    }
    //all operations take o(1) tc.
};