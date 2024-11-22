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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> output;

        if(root == NULL){
            return output;
        }

        binaryTreePathshelper(root, "", output);

        return output;

    }
    void binaryTreePathshelper(TreeNode* root, string paths, vector<string>& output){
        if(root == NULL){
            return;
        }

        if(!paths.empty()){
            paths += "->";
        }
        
        paths += to_string(root->val);

        if(root->left == NULL && root->right == NULL){
            output.push_back(paths);
        }

        else{
            if(root->left != NULL){
                binaryTreePathshelper(root->left, paths, output);
            }

            if(root->right != NULL){
                binaryTreePathshelper(root->right, paths, output);
            }
        }
    }
};