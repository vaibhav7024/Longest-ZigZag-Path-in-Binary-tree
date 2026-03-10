class Solution {
public:
    int ans =0;
    void dfs(TreeNode* root,bool dir, int length){
        if(!root) return ;
        ans= max(ans,length);
        if(dir){
            dfs(root->left,false,length+1);
            dfs(root->right,true,1);
        }else{
            dfs(root->right,true,length+1);
            dfs(root->left,false, 1);
        }
    }
    int longestZigZag(TreeNode* root) {
        dfs(root->left,false,1);
        dfs(root->right,true,1);
        return ans;
    }
};
