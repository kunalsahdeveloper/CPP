
// not optimal solution O(n^2)
// int height( TreeNode<int>  *root){
//     if(root == NULL)
//         return 0;
    
//     return max(height(root->left), height(root->right)) + 1;
// }

// int diameterOfBinaryTree(TreeNode<int> *root){
	
//     if( root == NULL){
//         return 0;
//     }
//     int leftDiameter = diameterOfBinaryTree(root->left);
//     int rightDiameter = diameterOfBinaryTree(root->right);

//     int lenOfNode = height(root->left) + height(root->right);

//     return max(max(leftDiameter,rightDiameter), lenOfNode);

// }



int height( TreeNode<int>  *root, int &ans){
    if(root == NULL)
        return 0;
    
    int leftHeight = height(root->left, ans);
    int rightHeight = height(root->right, ans);

    ans = max(ans, leftHeight + rightHeight);

    return max(leftHeight, rightHeight) +1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
	int ans = 0;
    height(root, ans);

    return ans;

}