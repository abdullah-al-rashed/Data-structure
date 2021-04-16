struct node {
    int val = 0;
    node* next = nullptr;
};

int removeFront (node *&n){
    if(n == nullptr){
        return -1;
    }
    else{
        node* j = n;
        
        int x = j->val;
        n = n->next;
        delete j;
        
        return x;
    }
}
