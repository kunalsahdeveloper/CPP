class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &arr)
    {
        if (root != NULL)
        {
            inorder(root->left, arr);
            arr.push_back(root->val);
            inorder(root->right, arr);
        }
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;
        inorder(root, v);

        return v;
    }
};