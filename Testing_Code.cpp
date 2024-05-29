// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int n,m;
// //     cin>>n>>m;
// //     int div = 0;
// //     int ndiv = 0;
// //     for(int i=1;i<=n;i++){z
// //         if(i%m==0){
// //             div+=i;
// //         }
// //         else if(i%m!=0){
// //             ndiv+=i;
// //         }
// //     }
// //     cout<<div<<" "<<ndiv;
// //     return 0;
// // }
// #include <iostream>
// #include <queue>

// using namespace std;

// // Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

// void checkNodesAtLevel(TreeNode* root, int level) {
//     if (root == NULL)
//         return;

//     queue<TreeNode*> q;
//     q.push(root);
//     int currentLevel = 0;

//     while (!q.empty() && currentLevel <= level) {
//         int levelSize = q.size();

//         // Process all nodes at the current level
//         for (int i = 0; i < levelSize; ++i) {
//             TreeNode* node = q.front();
//             q.pop();

//             // If the current node is at the specified level, print its value
//             if (currentLevel == level) {
//                 cout << node->val << " ";
//             }

//             // Enqueue the children of the current node
//             if (node->left) {
//                 q.push(node->left);
//             }
//             if (node->right) {
//                 q.push(node->right);
//             }
//         }

//         // Move to the next level
//         ++currentLevel;
//     }
// }

// int main() {
//     // Example usage:
//     // Creating a binary tree
//     TreeNode* root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(7);

//     int levelToCheck = 2; // Specify the level you want to check
//     cout << "Nodes at level " << levelToCheck << ": ";
//     checkNodesAtLevel(root, levelToCheck);
//     cout << endl;

//     return 0;
// }




