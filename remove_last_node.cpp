int removeBack(node *&n){
    if(n == nullptr){
        return -1000;
    }
    if(n->next == nullptr){
        node *j = n;
        int x = j->val;
        n = n->next;
        delete j;
        return x;
    }
    node* current = n;
    while(current->next->next!=nullptr){
        current = current->next;
    }
   
    node* j = current->next;
    current->next = current->next->next;
    int x = j->val;
    delete j;
    return x;
}
