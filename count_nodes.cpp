int countNodes (node* n) {
    int count = 0;
    while (n != nullptr) {
        n = n->next;
        count = count + 1;
    }
    return count;
}
