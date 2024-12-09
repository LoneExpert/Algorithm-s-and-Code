long long lsum(BinaryTreeNode<int> *root,int sum){
	if(root==NULL){
		return 0;
	}

	long long L = lsum(root->left,1);
	long long R = lsum(root->right,0);

	if(sum!=0){
		return (L+R+long(root->data));
	}
	return (L+R);


}

long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	return lsum(root,0);
}