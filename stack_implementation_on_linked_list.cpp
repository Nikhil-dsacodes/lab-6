
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};

// print Stack Function 
void print(struct Node* head){
    struct Node* current = head;
    while(current != nullptr){
        cout<<current->data<<endl;
        current = current->next;
    }
}

// isEmpty()
bool isEmpty(struct Node* top){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}

// isFull()
bool isFull(struct Node* top){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if(n == NULL){
        return true;
    }
    else{
        return false;
    }
}

// push()
void push(struct Node* &top, int x){
    if(isFull(top)){
        cout<<"Stack Overflow";
    }
    else{
      struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
    }
}

// pop()
int pop(struct Node* &top){
    if(isEmpty(top)){
        cout<<"Stack Underflow";
        return -1;
    }
    struct Node* n = top;
    top = top->next;
    int x = n->data;
    free(n);
    return x;
}

int main() {
    struct Node* top = NULL;
    push(top, 2);
    push(top, 5);
    push(top, 7);
    push(top, 9);
    push(top, 3);
    push(top, 10);
    pop(top);
    push(top, 1);
    push(top, 6);
    pop(top);
    
    print(top);
    
    
    return 0;
}
