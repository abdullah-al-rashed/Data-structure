struct node {
    int value = 0;
    node *next = nullptr;
};

int addition_llist (node *n){
    int sum=0;
    
    while (n->next!=nullptr){
        sum=sum + n->value;
        n = n->next;
    }
    if (n==nullptr){
        return NULL;
    }
    else if (n->next==nullptr){
        return NULL;
    }
    else {
        return sum+n->value;
    }
}
