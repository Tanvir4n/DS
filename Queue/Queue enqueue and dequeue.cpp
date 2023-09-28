#include<bits/stdc++.h>

using namespace std;

typedef struct node{
    int data;
    struct node *next;
}node;

node *frnt = NULL, *rear = NULL;

void enqueue(int k){
    node *temp = (node *) malloc(sizeof(node));
    temp->data = k;
    temp->next = NULL;
    if(rear == NULL){
        frnt = temp;
        rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

void dequeue(){

    if(frnt != NULL){
        node *temp = frnt;
        cout << "Dequeue element : "<<temp->data<<endl;
        frnt = frnt->next;
        if(frnt==NULL)
            rear=NULL;
            free(temp);
    }
        else{
            cout << "Queue is Empty"<<endl;
    }
}
void display(){
    cout <<"Current Queue : ";
    node *p = frnt;
    while(p!=NULL){
        cout << p->data <<" ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
}
