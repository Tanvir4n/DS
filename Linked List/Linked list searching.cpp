#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    node *node1 = (node *)malloc(sizeof(node));
    node *node2 = (node *)malloc(sizeof(node));
    node *node3 = (node *)malloc(sizeof(node));
    node* start;

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    start = node1;

    node* p = start;

    bool result = false;
    int key = 3;    // 3 is true and 4 is false because 4 does not exist

    while (p != NULL){
        if (p->data == key){
            result = true;
        }

        p = p->next;
    }

    cout<<(result ? "True" : "False")<<endl;

    // Clean up allocated memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
