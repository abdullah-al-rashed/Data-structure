#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode *next = nullptr;
};


void addValueByInd(ListNode *& sll, int val, int index) {
    if (index == 0) {
        ListNode* n = new ListNode;
        n->data = val;
        n->next = sll;
        sll = n;
    }
    else {
        ListNode *current = sll;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        ListNode *n = new ListNode;
        n->data = val;
        n->next = current->next;
        current->next = n;
    }
}
void printList (ListNode *n){
    while (n!=nullptr){
        cout<<n->data<<" ";
        n = n->next;
    }
}
void addValue(ListNode *&n, int val){
    
    if(n == nullptr){
        n = new ListNode;
        n->data = val;
        
    }
    else {
        ListNode *current = n;
        while(current->next!= nullptr){
            current = current->next;
        }
        
        ListNode *p = new ListNode;
        p->data = val;
        current->next = p;
    }
}
void remove_value(ListNode *&n, int val){
    if (n->data==val){
        ListNode *temp = n;
        n=n->next;
        delete temp;
    }
    else {
        ListNode *current = n;
        while (current->next!=nullptr){
            if (current->next->data==val){
                
                ListNode *temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
            else {
                current = current->next;
            }
        }
    }
}
void reverseLlist(ListNode *&head) {
        // Initialize current, previous and
        // next pointers
        ListNode* current = head;
        ListNode* prev = nullptr, *next = nullptr;
 
        while (current != nullptr) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
    
        head = prev;
}

void concatenatellist (ListNode *&newllist1, ListNode *newllist2){
    
    ListNode *current = newllist1;
    
    while (current->next!=nullptr){
        current = current->next;
    }
    current->next = newllist2;
}

void split (ListNode *&mainllist){
    
    ListNode *current = mainllist;
    
    ListNode *newllist1 = nullptr;
    ListNode *newllist2 = nullptr;
    
    while (current!=nullptr){
        if (current->data < 0){
            addValue(newllist1, current->data);
            
        }
        else if (current->data >= 0){
            addValue(newllist2, current->data);
        }
        remove_value(mainllist, current->data);
        current = current->next;
    }
    
    reverseLlist(newllist1);
    concatenatellist(newllist1, newllist2);

    mainllist = newllist1;
    
    
}

int main (){
    
    ListNode *llist = nullptr;
    
    addValueByInd(llist, 8, 0);
    addValueByInd(llist, 7, 1);
    addValueByInd(llist, -4, 2);
    addValueByInd(llist, 19, 3);
    addValueByInd(llist, 0, 4);
    addValueByInd(llist, 43, 5);
    addValueByInd(llist, -8, 6);
    addValueByInd(llist, -7, 7);
    addValueByInd(llist, 2, 8);
    

    split(llist);
    
    
    printList(llist);
    
}



