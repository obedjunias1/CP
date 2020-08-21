long int sumBT(Node* root)
{                                                            
    /*
            1
        /       \
        2        3   */
// ((1)+((2+(0+0))+(3+(0+0))))
    // Code here
    if(root==NULL){
        return 0;
    }
    return root->key+sumBT(root->left)+sumBT(root->right);
    
}