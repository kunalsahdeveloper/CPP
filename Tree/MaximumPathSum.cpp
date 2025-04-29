class Solution
{
public:
    int ans = INT_MIN;

    int helper(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftSum = max(0, helper(root->left));
        int rightSum = max(0, helper(root->right));

        ans = max(ans, leftSum + rightSum + root->val);

        return root->val + max(leftSum, rightSum);
    }

    int maxPathSum(TreeNode *root)
    {
        helper(root);
        return ans;
    }
};