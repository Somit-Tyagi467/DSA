class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  public:
    Node*front;
    Node*rear;
    myQueue() {
        // Initialize your data members
        front=rear=NULL;
    }

    bool isEmpty() {
        // check if the queue is empty
        return front==NULL;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node*temp=new Node(x);
        if(rear==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }

    int dequeue() {
        // Removes the front element of the queue
        if(isEmpty()){
            return -1;
        }
        Node*temp=front;
        int val=temp->data;
        front=front->next;
        if(front==NULL){
            rear=NULL;
            
        }
        delete temp;
        return val;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(isEmpty()){
            return -1;
        }
        return front->data;
    }

    int size() {
        // Returns the current size of the queue.
        int count=0;
        Node*temp=front;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
};
