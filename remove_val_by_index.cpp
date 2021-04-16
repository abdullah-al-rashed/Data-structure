void removeValByIndex(node *&sll , int index) {
    if (index == 0) {
        node* j = sll;
        sll = sll->next;
        delete j;
    }
    else {
        node* current = sll;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        node* j = current->next;
        current->next = current->next->next;
        delete j;
    }
    
    
}
