#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int x){
        val = x;
        left = right = NULL;
    }
};

void levelOrder(Node *root){
    queue<Node*> q;
        q.push(root);
        int maxx = INT_MIN;
        int level ;
        int current_level = 0;
        while(!q.empty()){
            int current_levelsum = 0;
            ++current_level;
            for(int  i = q.size();i>0;i--){
                Node* curr = q.front();
                q.pop();
                cout<<curr->val<<" ";
                current_levelsum+=curr->val;
                // cout<<curr->val<<" ";
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            if(current_levelsum > maxx){
                maxx = current_levelsum;
                level = current_level;
            }
        }
        return;    
    }
void BtoDLL(Node *root, Node **head){
    if(root == NULL){
        return;
    }
    static Node * prev = NULL;
    BtoDLL(root->left,head);
    if(prev == NULL){
        *head = root;
    }
    else{
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BtoDLL(root->right,head);

}
int main() {
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(-2);
    root->left->right = new Node(6);
    root->left->left->right = new Node(2);
    root->left->left->right->left = new Node(-1);
    root->left->right->right = new Node(8);
    root->right = new Node(30);
    root->right->right = new Node(40);

    // levelOrder(root)
    struct Node *head = NULL;
    BtoDLL(root,&head);
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->right;
    }
    cout<<endl;
    while(root->right != NULL){
        root = root->right;
    }
     while(root!=NULL){
        cout<<root->val<<" ";
        root = root->left;
    }
    return 0;
}
