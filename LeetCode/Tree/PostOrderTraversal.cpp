class Solution
{
public:
    void postorder(TreeNode *root, vector<int> &arr)
    {

        if (root != NULL)
        {
            postorder(root->left, arr);
            postorder(root->right, arr);
            arr.push_back(root->val);
        }
    }

    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> v;

        postorder(root, v);

        return v;
    }
};