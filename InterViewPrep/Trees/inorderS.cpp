#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void inorderS(Node *root){
    Node *curr = root;
    stack<Node *> s;
    while(curr!=NULL || !s.empty()){ 
        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(-2);
    root->left->right = new Node(6);
    root->left->left->right = new Node(2);
    root->left->left->right->left = new Node(-1);
    root->left->right->right = new Node(8);
    root->right = new Node(30);
    root->right->right = new Node(40);
    inorderS(root);
    cout<<endl;
    return 0;
}
