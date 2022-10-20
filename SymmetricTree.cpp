#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSymmetric(TreeNode* root) { 
    if(root == NULL) return true;
    return testingTreeValues(root->left, root->right);
}

bool testingTreeValues(TreeNode* a, TreeNode* b){
    if(a == NULL && b == NULL) return true; //if the left and right side are empty 
    else if(a == NULL || b == NULL) return false; //if one is empty and the other isnt 
    else if (a->val != b->val) return false; //if they hold a value but arent the same 
    return testingTreeValues(a->left, b->right) && testingTreeValues(a->right, b->left); //checking the mirror property
    
    
}