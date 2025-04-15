class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> v;
        vector<int> t1, t2;

        if (root != NULL)
        {
            v.push_back(root->val);

            t1 = preorderTraversal(root->left);
            v.insert(v.end(), t1.begin(), t1.end());
            t2 = preorderTraversal(root->right);
            v.insert(v.end(), t2.begin(), t2.end());
        }

        return v;
    }
};