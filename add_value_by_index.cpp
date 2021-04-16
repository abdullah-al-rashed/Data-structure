void addValueByInd(node*& sll, int data, int index) {
    if (index == 0) {
        node* n = new node;
        n->val = data;
        n->next = sll;
        sll = n;
    }
    else {
        node* current = sll;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        node *n = new node;
        n->val = data;
        n->next = current->next;
        current->next = n;
    }
}
