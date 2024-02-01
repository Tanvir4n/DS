#include <bits/stdc++.h>

using namespace std;

typedef struct TreeNode{

    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

}TreeNode;

void traverse_and_sum(TreeNode* node, int& sum){
    if(node){
        if(node->val % 2 == 0){
            sum *= node->val;
        }

        traverse_and_sum(node->left, sum);
        traverse_and_sum(node->right, sum);
    }
}

int sum_of_product_values(TreeNode* root){
    int sum = 1;
    traverse_and_sum(root, sum);
    return sum;
}

int main(){

    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(9);
    root->right->right = new TreeNode(14);
    root->right->left = new TreeNode(13);

    int sum_of_product = sum_of_product_values(root);
    cout<< "Product: "<<sum_of_product<<endl;

    return 0;
}
