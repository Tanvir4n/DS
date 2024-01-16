#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* previous;
    node* next;
};

int main(){
    node* node1 = new node;
    node* node2 = new node;
    node* node3 = new node;
    node* node4 = new node;

    node1->data = 4;
    node2->data = 5;
    node3->data = 6;
    node4->data = 7;

    node1->previous = NULL;
    node2->previous = node1;
    node3->previous = node2;
    node4->previous = node3;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    node* left = node1;
    node* right = node4;
    node* p, *t;

    // Traversal from left
    p = left;
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;

    // Traversal from right
    p = right;
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->previous;
    }

    // Deallocate memory
    delete node1;
    delete node2;
    delete node3;
    delete node4;

    return 0;
}
