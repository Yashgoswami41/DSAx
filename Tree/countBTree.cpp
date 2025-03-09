class Solution {
    public:
        
        void New(TreeNode* root, int maxi, int &count){
            if(!root) return;
    
            if(root->val>=maxi){
                count++;
                maxi=root->val;
            }
    
            New(root->left,maxi,count);
            New(root->right,maxi,count);
    
            return;
    
        }
        
        int goodNodes(TreeNode* root) {
            int count = 0;
            New(root,root->val,count);
            return count;
        }
    };