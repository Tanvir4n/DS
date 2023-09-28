#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

#define resetP ptr = start;

typedef struct node{
    int data;
    struct node *next;
}node;

int main(){

    struct node *node1, *node2, *node3, *start;

    // Memory allocation
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));

    // Data storing
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    // Link nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    start = node1;

    node *ptr;
    //struct node *ptr = start;
    resetP;
    // Print the linked list
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        //printf("%d \n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
