struct ListNode {
    int data;         // value stored in each node
    ListNode* next;   // pointer to next node in list (nullptr if none)
}


int countDuplicates (ListNode *head) {
    int counter=0;
    ListNode *temp;
    
    if (head == nullptr){
        return 0;
    }
    
    for ( temp = head; temp->next != nullptr; temp = temp->next){
        if (temp->data == temp->next->data){
            counter=counter+1;
        }    
    }
    
    return counter;
}
