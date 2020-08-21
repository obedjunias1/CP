//Inorder Traversal without recursion and stacks

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
void inorderWRS(Node *root){
    Node *curr = root;
    while (curr!=NULL) {
        if (curr->left == NULL) {
            cout<<curr->data<<" ";
            curr = curr->right;
        }
        else {
            Node *predecessor = curr->left;
            while (predecessor->right!=NULL && predecessor->right != curr) {
                predecessor = predecessor->right;
            }
            if (predecessor->right == NULL) {
                predecessor->right = curr;
                curr = curr->left;
            }
            else {
                predecessor->right = NULL;
                cout<<curr->data<<" ";
                curr = curr->right;
            }
        }
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
    inorderWRS(root);
    cout<<endl;
    return 0;
}
