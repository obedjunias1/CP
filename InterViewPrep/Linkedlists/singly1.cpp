#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 
int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1;

    head->next = second;

    second->data = 2;

    second->next = third;

    third->data = 3;

    third->next = NULL;

    printList(head);
    cout<<endl;
    // Adding a node at front

    Node *temp = new Node();
    temp->data = 0;
    temp->next = head;
    head = temp;
    printList(head);
    cout<<endl;
    third->next = new Node();
    third = third->next;
    third->data = 5;
    third->next = NULL;
    printList(head);
    cout<<endl;
    //Add a node after a given node:

    int given = 2;
    int new_val = 4;
    Node *temp1 = head;

    while(temp1!= NULL && temp1->data != given){ 
        temp1 = temp1->next;
    }
    printList(temp1);
    cout<<endl;
    Node *newone = new Node();
    newone->data = new_val;
    newone->next = temp1->next;
    temp1->next = newone;
    printList(head);
    cout<<endl;

    // Add a node at the end

    Node *last = new Node();
    last->data = 6;
    temp1 = head;
    while(temp1->next!=NULL){ 
        temp1 = temp1->next;
    }
    temp1->next = last;
    last->next = NULL;
    printList(head);
    cout<<endl;
    return 0;
}