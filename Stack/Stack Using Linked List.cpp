#include <bits/stdc++.h>

using namespace std;

typedef struct node{
  int data;
  node *previous;
}node;

node *top = nullptr;

void push(int val){
    node *new_node = new node;
    new_node->data = val;
    new_node->previous = top;
    top = new_node;
}

void pop(){
    node *p;
    if(top == nullptr){
    cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Popped element: "<<top->data<<endl;
        p = top;
        top = top->previous;
        delete p;
    }
}

void printStack(){
    node *p = top;
    while(p != nullptr){
        cout<<p->data<<" ";
        p = p->previous;
    }
    cout<<endl;
}

int main(){

    cout<<"Initial Stack"<<endl;
    printStack();

    push(10);
    cout<<"After the push, the new stack"<<endl;
    printStack();

    push(20);
    cout<<"After the push, the new stack"<<endl;
    printStack();

    push(30);
    cout<<"After the push, the new stack"<<endl;
    printStack();

    pop();
    cout << "After the pop, the new stack" << endl;
    printStack();

    pop();
    cout<<"After the pop, the new stack"<<endl;
    printStack();

  return 0;
}
