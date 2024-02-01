#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

#define MAX 10

int stack_arr[MAX];

int top = -1;

int isEmpty(){

    if(top == -1){                              // top = -1 indicates that the stack is empty;
        return 1;
    }
    else{
        return 0;
    }

}

int isFull(){
    
    if(top == MAX-1){                           // top == MAX-1 indicates that the stack is full;
        return 1;
    }
    else{
        return 0;
    }
}
void push(int data){

    if(!isFull){
        cout<<"Stack Overflow"<<endl;
        return;
    }

    top = top+1;
    stack_arr[top] = data;
}
void pop(){
    
    if(isEmpty!=0){
        cout<<"Poping Data: "<<stack_arr[top]<<endl;
        stack_arr[top] = 0;
        top--;
    }
}
void output(){
    
    cout<<"Stack Now: ";
    for(int i=0; i<=top; i++){
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Top now: "<<top<<endl;
}

int main(){

    push(1);
    push(2);
    push(3);
    push(4);
    //push(5);
    output();
    pop();
    output();
}

/*

Push operation
-Top is increment by 1
-New element is pushed at the position top

Pop operation
-Top is decrement by 1
-The element of the position of top is deleted first

*/
