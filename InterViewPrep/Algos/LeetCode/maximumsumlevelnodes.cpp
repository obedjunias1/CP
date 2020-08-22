/*https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/submissions/
22-08-2020 12:21:43

Input: [1,7,0,7,-8,null,null]
Output: 2
Explanation: 
Level 1 sum = 1.
Level 2 sum = 7 + 0 = 7.
Level 3 sum = 7 + -8 = -1.
So we return the level with the maximum sum which is level 2.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int maxx = INT_MIN;
        int level ;
        int current_level = 0;
        while(!q.empty()){
            int current_levelsum = 0;
            ++current_level;
            for(int  i = q.size();i>0;i--){
                TreeNode* curr = q.front();
                q.pop();

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
        return level;    
    }
};