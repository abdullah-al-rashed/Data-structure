#include <iostream>
#include <sstream>
using namespace std;


struct node {
    int value = 0;
    node *next = nullptr;
};

void adding_value(node *&n, int val){
    
    if (n==nullptr){
        n = new node;
        n->value=val;
    }
    else {
        node* current = n;
        while (current->next!=nullptr){
            current= current->next;
        }
    node *p = new node;
    p->value=val;
    current->next=p;
    }
}

void printList (node *n){
    while (n!=nullptr){
        cout<<n->value<<endl;
        n= n->next;
    }
}


void remove_value(node *&n, int val){
    if (n->value==val){
        node *temp = n;
        n=n->next;
        delete temp;
    }
    else {
        node *current = n;
        while (current->next!=nullptr){
            if (current->next->value==val){
                
                node *temp = current->next;
                current->next =current->next->next;
                
                delete temp;
            }
            else {
                current = current->next;
            }
        }
    }
}



int main (){
    
    int n=0, size=0, num=0;
    node *llist = nullptr;
    
    cout<<"Enter a size of a linked list you want to create: ";
    cin>>size;
    
    for (int i=0; i<size; ++i){
    cout<<"Enter no. "<<i+1<<" value : ";
    cin>>n;
    adding_value(llist, n);
    }
    
    printList(llist);
    
    cout<<"Now enter a number you want to remove from the list: ";
    cin>>num;
    
    remove_value(llist, num);
    
    cout<<"**********After removal**********"<<endl;
    printList(llist);
    
}
