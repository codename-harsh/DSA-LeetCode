class MyCircularQueue {
    int *arr;
    int capacity;
    int currSize;
    int f,r;

public:

    MyCircularQueue(int k) {
        capacity = k;
        currSize = 0;
        f = 0; 
        r = -1;
        arr = new int[k];
    }
    
    bool enQueue(int value) {
        if(currSize == capacity){
            return false;
        }
        r = (r+1)%capacity;
        arr[r] = value;
        currSize ++;
        return true;
    }
    
    bool deQueue() {
        if(!currSize){
            return false;
        }
        f = (f+1)%capacity;
        currSize--;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return arr[f];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
       return arr[r]; 
    }
    
    bool isEmpty() {
        return currSize==0;
    }
    
    bool isFull() {
        return currSize==capacity;
    }
};