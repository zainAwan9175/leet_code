class node{
    public:
    int val;
    node* next;
    node (int d)
    {
        val=d;
        next=NULL;

    }


};

class MyLinkedList {
public:
 node* head;
    MyLinkedList() {
   head=NULL;
    }
    int leng()
    {
        if(head==NULL)
        {
            return 0;
        }
        int count=0;
        node *temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;

    }
    
    int get(int index) {
   

        if(head==NULL)
        {
            return -1;
        }
        else{
            node* temp=head;
            int count=0;
            while(temp!=NULL&&count<index)
            {
                count++;
                temp=temp->next;
            }
            if(temp==NULL)
            {
                return -1;
            }
            else{
                return temp->val;
            }

        }
        
    }
    
    void addAtHead(int val) {
        node* temp=new node(val);
        if(head==NULL)
        {
            head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }

        
    }
    
    void addAtTail(int val) {
        node* temp=new node(val);
        if(head==NULL)
        {
           head=temp;
        }
        else{
            node* tmp=head;
            
            while(tmp->next!=NULL)
            {
                tmp=tmp->next;
            }
            tmp->next=temp;


        }
        
    }
    
    void addAtIndex(int index, int val) {
    // If index is 0, insert at the head
    if (index == 0) {
        addAtHead(val);
        return;
    }

    // Check if the index is within the valid range
    int l = leng();
    if (index > l) {
        return; // Index is out of bounds
    }

    // Traverse to the node at position index - 1
    node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL) {
            return; // If temp becomes NULL before reaching index - 1, exit
        }
        temp = temp->next;
    }

    // Create the new node to insert
    node* newNode = new node(val);
    
    // Insert the new node at the given index
    newNode->next = temp->next;
    temp->next = newNode;
}

    
    void deleteAtIndex(int index) {
    // If the list is empty, do nothing
    if (head == NULL) {
        return;
    }
    
    // If the index is 0, delete the head node
    if (index == 0) {
        node* temp = head;
        head = head->next; // Move the head to the next node
        delete temp;       // Free the old head node
        return;
    }
    
    // Traverse to the node just before the one to be deleted
    node* prev = head;
    for (int i = 0; i < index - 1; i++) {
        if (prev->next == NULL) {
            return; // If we reach the end before index-1, exit (invalid index)
        }
        prev = prev->next;
    }
    
    // If the node to be deleted is not valid (i.e., the next node is NULL), return
    if (prev->next == NULL) {
        return;
    }
    
    // Delete the node at the given index
    node* toDelete = prev->next;
    prev->next = toDelete->next; // Bypass the node to delete
    delete toDelete;             // Free the memory of the deleted node
}

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */