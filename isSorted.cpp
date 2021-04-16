struct ListNode {
    int data;         // value stored in each node
    ListNode* next;   // pointer to next node in list (nullptr if none)
}


bool isSorted (ListNode *head) {
    
    ListNode *temp;
    
    if (head == nullptr){
        return true;
    }
    
    for ( temp = head; temp->next != nullptr; temp = temp->next){
        if (temp->data > temp->next->data){
            return false;
        }
        else if (temp->data == temp->next->data){
            if (temp->data > temp->next->data){
                return false;
            }
        }    
    }
    
    return true;
}








