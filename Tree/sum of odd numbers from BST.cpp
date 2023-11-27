#include <bits/stdc++.h>

using namespace std;

typedef struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    // Constructor to initialize values
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}

}TreeNode;

void traverse_and_sum(TreeNode* node, int& sum){
    if(node){
        traverse_and_sum(node->left, sum);

        if(node->val % 2 != 0){
            sum += node->val;
        }

        traverse_and_sum(node->right, sum);
    }
}

int sum_of_odd_values(TreeNode* root){
    int sum = 0;
    traverse_and_sum(root, sum);
    return sum;
}

int main(){

    // Create a sample BST
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(9);
    root->right->right = new TreeNode(14);
    root->right->left = new TreeNode(13);

    // Find and print the sum of odd values
    int sum_of_odd = sum_of_odd_values(root);
    cout<<"BST "<<sum_of_odd<<endl;

    // Clean up allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
