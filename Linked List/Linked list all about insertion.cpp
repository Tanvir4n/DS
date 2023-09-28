#include<bits/stdc++.h>
#include<stdio.h>
#include<stdbool.h>

using namespace std;

#define resetP ptr = start;

typedef struct node{
    int data;
    node *next;
}node;

int main(){
    node *node1, *node2, *node3;

    node *ptr;
    node *start;

    // Memory allocation
    node1 = (node *)malloc(sizeof(node));
    node2 = (node *)malloc(sizeof(node));
    node3 = (node *)malloc(sizeof(node));

    // By using arrow operator, initialize the data (storing data)
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    // Link nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    start = node1;

    // Print the linked list
    ptr = start;

    // print the vale before insertion
    resetP;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;

    }

    // New Node at Beginning
    cout<<"New Node at Beginning"<<endl;
    node *nodeFirst;
    nodeFirst = (node *)malloc(sizeof(node));       // Memory allocation

    start = nodeFirst;
    nodeFirst->next = node1;
    nodeFirst->data = 8;
    resetP;

    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;

    }


    // New Node at Ending
    cout<<"New Node at Ending"<<endl;
    node *nodeLast;
    nodeLast = (node *)malloc(sizeof(node));

    nodeLast->data = 4;
    nodeLast->next = NULL;

    resetP;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = nodeLast;
    resetP;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;

    }

    // New Node in Middle
    cout<<"New Node in Middle"<<endl;
    node *mid_node;
    mid_node = (node *)malloc(sizeof(node));
    mid_node->data = 9;

    resetP;
    for(int i=1; i<2; i++){
        if(ptr != NULL){
            ptr = ptr->next;
        }
    }

    mid_node->next = ptr->next;
    ptr->next = mid_node;

    resetP;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;

    }
    // New node at K-th position
    cout<<"New Node at K-th position"<<endl;
    node *new_node;
    new_node = (struct node *)malloc(sizeof(node));
    new_node->data = 6;
    new_node->next = NULL;

    ptr = start;
    int k = 3;
    for(int i=2; i<k; i++){
        if(ptr->next != NULL){
            ptr = ptr->next;
        }
    }
    new_node->next = ptr->next;
    ptr->next = new_node;

    resetP;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }

    return 0;
}
