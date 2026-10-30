class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        this->data=val;
        next=prev=NULL;
    }
};
class MyCircularDeque {
public:
    Node* rear;
    Node* front;
    int size;
    int max_size;
    MyCircularDeque(int k) {
        size=0;
        max_size= k;
        rear=front=NULL;
    }
    
    bool insertFront(int value) {
        if(size==max_size) return false;
        Node* temp= new Node(value);
        if(front==NULL){
            front=rear=temp;
        } else{
           temp->next=front;
        front->prev=temp;
        front= temp ;
        }
        size++;
        return true;
        
    }
    
    bool insertLast(int value) {
         if(size==max_size) return false;
        Node* temp= new Node(value);
        if(front==NULL){
            front=rear=temp;
        } else{
           rear->next=temp;
            temp->prev=rear;
            rear=temp;
        }
        size++;
        return true;
    }
    
    bool deleteFront() {
         if(front==NULL)
            return false;
            if(front==rear)
        {
            front=rear=NULL;
        }
        else{
            front=front->next;
        }
        size--;
        return true;
    }
    
    bool deleteLast() {
         if(rear==NULL)
            return false;
            if(front==rear)
        {
            front=rear=NULL;
        }
        else
        {
            rear=rear->prev;
        }
        size--;
        
        return true;
    }
    
    int getFront() {
        if(front==NULL)
            return -1;
        return front->data;
    }
    
    int getRear() {
        if(rear==NULL)
            return -1;
        return rear->data;
    }
    
    bool isEmpty() {
        if(front==NULL)
            return true;
        return false;
    }
    
    bool isFull() {
         if(max_size==size)
            return true;
        return false;
    }
};