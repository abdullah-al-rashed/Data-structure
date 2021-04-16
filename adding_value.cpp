#include <iostream>
#include <sstream>
using namespace std;
struct node{
    int val = 0; //value er jonno variable
    node *next = nullptr; //link korar pointer ( → )
};

void addValue(node *&n, int value){
    
    if(n == nullptr){ //porer node ta nullptr thakle
        n = new node; //new node for the new value
        n->val = value;//value added to variable
        //pointer thakle n.value er jaygay n->value hobe
    }
    else { //onek node thakle
        node *current = n; //current hocche new variable
        while(current->next!= nullptr){ //jotokjon na nullptr  pawa jay! search korte thakbe
            current = current->next;
        }
        
        node *p = new node; //new node for new value
        p->val = value; //value added to variable
        current->next = p; //variable witha value set into linked list
    }
}

void printList(node *n){
    while(n!=nullptr){
        cout<<n->val<<endl;
        n = n->next;
    }
    cout<<endl;
}


int main(){
    //singly linked list
    node *n = nullptr;
    
    //values for linked list
    addValue(n, 10);//node*&n = sll
    addValue(n, 30);
    addValue(n, 20);
    addValue(n, 30);
    addValue(n, 40);
    addValue(n, 50);
    addValue(n, 60);
    
    //printing
    printList(n);
}
