int removeFront(node*&head){
    if(head == nullptr){
        return -1000;
    }
    else{
        node* j = head;
        
        
        int x = j->val;
        head = head->next;
        delete j;
        
        return x;
    }
}
