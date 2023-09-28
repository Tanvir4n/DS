#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}node;

node *start=NULL;

void output(){
    node *ptr = start;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
}

void delete_first(){
    node *temp = start;
    start = start->next;
    free(temp);
}

void delete_middle(){
    node *head = start;
    node *slow = start, *fast = start, *prev = NULL;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = slow->next;
    free(slow);
}

void delete_last(){
    node *head = start;
    while(head->next->next!=NULL){
        head = head->next;
    }
    node *temp = head->next;
    head->next = NULL;
    free(temp);
}

void del_kth(int position){
    node *head = start, *prev = NULL;
    for(int i=1;i<position;i++){
        prev = head;
        head = head->next;
    }
    node *temp = head;
    prev->next = head->next;
    free(temp);
}

int main(){
    // Memory allocation
    node *node1 = (node *)malloc(sizeof(node));
    node *node2 = (node *)malloc(sizeof(node));
    node *node3 = (node *)malloc(sizeof(node));
    node *node4 = (node *)malloc(sizeof(node));
    node *node5 = (node *)malloc(sizeof(node));
    node *node6 = (node *)malloc(sizeof(node));
    node *node7 = (node *)malloc(sizeof(node));
    node *node8 = (node *)malloc(sizeof(node));
    node *node9 = (node *)malloc(sizeof(node));
    node *node10 = (node *)malloc(sizeof(node));

    // By using arrow operator, initialize the data (storing data)
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    node4->data = 4;
    node5->data = 5;
    node6->data = 6;
    node7->data = 7;
    node8->data = 8;
    node9->data = 9;
    node10->data = 10;

    // Link nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;
    node10->next = NULL;

    start = node1;

    // Print the linked list
    cout<<"Linked list before deletion:"<<endl;
    output();

    // Perform delete_first
    delete_first();
    cout<<"Linked list after delete_first:"<<endl;
    output();

    // Perform delete_last
    delete_last();
    cout<<"Linked list after delete_last:"<<endl;
    output();

    int position = 4;
    cout<<"Linked list after K-th:"<<endl;
    del_kth(position);
    output();

    // Perform delete_middle
    delete_middle();
    cout<<"Linked list after delete_middle:"<<endl;
    output();

    // Clean up memory
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;

    return 0;
}
