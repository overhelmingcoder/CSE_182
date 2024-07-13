
#include <iostream>
#include <cstdlib>
using namespace std;

// Definition of a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to check if a binary tree is balanced
bool isBalanced(TreeNode* root) {
    if (root == NULL) return true;
    int lh = isBalanced(root->left) ? 1 + height(root->left) : -1;
    int rh = isBalanced(root->right) ? 1 + height(root->right) : -1;
    return abs(lh - rh) <= 1 && lh != -1 && rh != -1;
}

// Function to create a new tree node
TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    return node;
}

int main() {
    // Create a sample binary tree
   // TreeNode* root = newNode(1);
       TreeNode*root=new node(50);
    root->left=new node(17);
    root->right=new node(72);
    root->left->left=new node(12);
    root->left->right=new node(23);
    root->right->left=new node(54);
    root->right->right=new node(76);
    root->left->left->left=new node(9);
    root->left->left->right=new node(14);
    root->left->right->right=new node(19);
    root->right->left->right=new node(67);


     root->right->left->right->right==new node(867);


    // Check if the tree is balanced
    if (isBalanced(root))
        cout << "The tree is balanced." << endl;
    else
        cout << "The tree is not balanced." << endl;

    return 0;
}
