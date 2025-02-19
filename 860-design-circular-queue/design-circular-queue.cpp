class MyCircularQueue {
public: 

int *arr;
int size=0;
int l=0;
int rear=-1;
int front=0;

    MyCircularQueue(int k) {
   
        arr=new int[k];
        l=k; 

    }    
    
    bool enQueue(int val) {
      
      if(size==l)
      {
        return false;
      }

      rear=(rear+1)%l;
      arr[rear]=val;
      size++;
      return true;


    }
    
    bool deQueue() {

        if(size==0)
        {
            return false;
        }
        front=(front+1)%l;
        size--;
        return true;
    }
    
    int Front() {
        if(size==0)
        {
            return -1;
        } 
        return arr[front];
      
      
     }
    
    int Rear() {

      if(size==0)
      {
        return -1;
      } 
      return arr[rear];
      
                     
    }
    
    bool isEmpty() {
        return size==0;
  
     
        
    }
    
    bool isFull() {
        return size==l;
     
  

        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */