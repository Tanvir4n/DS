//#include <bits/stdc++.h>
#include <iostream>

#define maxsize 5

using namespace std;

int front = -1, rear = -1;
int queue[maxsize];

void enqueue(){
    int item;
    cout<<"Enter the element: ";
    cin>>item;

    if(rear == maxsize - 1){
        cout<<"OVERFLOW"<<endl;
        return;
    }

    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    }
    else{
        rear = rear + 1;
    }

    queue[rear] = item;
    cout<<"Value inserted"<<endl;
}

void dequeue(){
    int item;
    if(front == -1 || front > rear){
        cout<<"UNDERFLOW"<<endl;
        return;
    }
    else{
        item = queue[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = front + 1;
        }
        cout<<"Value deleted: "<<item<<endl;
    }
}

void display(){
    if(rear == -1){
        cout<<"Empty queue!!!"<<endl;
    }
    else{
        cout<<"Queue:"<<endl;
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

int main() {

    enqueue();
    display();
    enqueue();
    display();
    dequeue();
    display();

    return 0;
}
