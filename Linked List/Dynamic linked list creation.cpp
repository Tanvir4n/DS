#include <bits/stdc++.h>

using namespace std;

typedef struct node{
    int data;
    struct node *next;
}node;

int main(){
    int n;
    node* a[20];
    node* start;
    node* p;

    cout<<"Enter number of nodes: ";
    cin>>n;

    if(n <= 0 || n > 20){
        cout<<"Invalid number of nodes. Please enter a number between 1 and 20."<<endl;
        return 1; // Exit with an error code
    }

    cout<<"Enter data of nodes: ";

    for(int i=0; i<n; i++){
        a[i] = (node*)malloc(sizeof(node));
        cin >> a[i]->data;
        a[i]->next = NULL; // Initialize the next pointer to NULL
    }

    for(int i=0; i<n-1; i++){
        a[i]->next = a[i+1];
    }

    cout<<"Printing linked list nodes: ";
    start = a[0];
    p = start;
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->next;
    }

    // Free allocated memory
    for(int i=0; i<n; i++){
        delete a[i];
    }

    return 0;
}
