void concatenate_llist (ListNode *llist1, ListNode *llist2){
    
    while (llist1->next!=nullptr){
        llist1=llist1->next;
    }
    llist1->next = llist2;
       
}
