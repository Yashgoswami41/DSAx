class Solution {
    private:
         bool solve(TreeNode* root, int target, int sum) 
    
      { 
        if(root == NULL) { 
            return false; 
            } 
            sum = sum + root->val; 
            if(root->left == NULL && root->right == NULL) 
            { 
                 if(sum == target)  
                 { 
                    return true; } 
                    else { 
                        return false; } 
                         } 
    
            bool leftAns  = solve(root->left, target, sum); 
    
            bool rightAns = solve(root->right, target, sum); 
    
            return leftAns  || rightAns; 
     } 
    public:
        bool hasPathSum(TreeNode* root, int targetSum) {
            int sum = 0;
            bool ans = solve(root, targetSum , sum);
            return ans;
        }
    };