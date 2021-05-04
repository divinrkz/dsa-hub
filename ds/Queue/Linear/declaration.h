struct Queue {
    int size;
    int front;
    int rear;
    int *Q; 
};


struct QueueNode {
    int data;
    QueueNode* next;
};

​

struct Queue {
    QNode *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
  
    void enQueue(int x)
    {
  
        // Create a new LL node
        QNode* temp = new QNode(x);
  
        // If queue is empty, then
        // new node is front and rear both
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
  
        // Add the new node at
        // the end of queue and change rear
        rear->next = temp;
        rear = temp;
    }
  
    // Function to remove
    // a key from given queue q
    void deQueue()
    {
        // If queue is empty, return NULL.
        if (front == NULL)
            return;
  
        // Store previous front and
        // move front one node ahead
        QNode* temp = front;
        front = front->next;
  
        // If front becomes NULL, then
        // change rear also as NULL
        if (front == NULL)
            rear = NULL;
  
        delete (temp);
    }
};
​
