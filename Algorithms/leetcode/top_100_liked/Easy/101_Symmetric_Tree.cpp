/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Iterative Solution
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        stack<TreeNode*> s;
       if(!root)
           return true;
        if(!root->left && !root->right) return true;
        s.push(root->left);
        s.push(root->right);
        while(!s.empty()){
            TreeNode* right = s.top();
            s.pop();
            TreeNode* left = s.top();
            s.pop();

            if(!left && !right) continue;
            if(!left || !right) return false;
            if(left->val == right->val){
                s.push(left->left);
                s.push(right->right);
                s.push(left->right);
                s.push(right->left);   
            }
            else
                return false;
         
        }
        return true;
    }
};

// Recursive Solution

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return !root ? true : isSymmetricUtil(root->left, root->right);
    }
private:
    bool isSymmetricUtil(TreeNode* left, TreeNode* right)
    {
        if(!left && !right) return true;
        if(!left || !right) return false;
        return (left->val == right->val) && (isSymmetricUtil(left->left, right->right) && isSymmetricUtil(left->right, right->left)) ;
    }
};