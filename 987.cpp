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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> output;
        map<int, map<int, vector<int>>> nodes;
        int col = 0;
        int row = 0;

        verticalTraversalhelper(root, nodes, col, row);

        for(auto& columns : nodes){
            vector<int> col_values;
            for(auto& rows : columns.second){
                sort(rows.second.begin(), rows.second.end());
                col_values.insert(col_values.end(), rows.second.begin(),rows.second.end());
            }
            output.push_back(col_values);
        }

        return output;
    }

    void verticalTraversalhelper(TreeNode* root, map<int, map<int, vector<int>>> &nodes, int col, int row){
        if(root == NULL){
            return;
        }

        else{
            nodes[col][row].push_back(root->val);

            if(root->left != NULL){
                verticalTraversalhelper(root->left,nodes,col-1,row+1);
            }

            if(root->right != NULL){
                verticalTraversalhelper(root->right,nodes,col+1,row+1);
            }
        }
    }
};