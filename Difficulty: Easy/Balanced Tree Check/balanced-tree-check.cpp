class Solution {
  public:

    int getHeight(Node* root){
        if(!root) return 0;
        
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        
        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(Node* root) {

        if(!root) return true;

        int leftRoot = getHeight(root->left);
        int rightRoot = getHeight(root->right);

        if(abs(leftRoot - rightRoot) <= 1 
           && isBalanced(root->left) 
           && isBalanced(root->right)){
            return true;
        }

        return false;
    }
};