/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> preorder;
        if(!root){
            return preorder;
        }
        stack<Node*> st;
        st.push(root);
        
        while(!st.empty()){
            root = st.top();
            st.pop();
            preorder.push_back(root->data);
            
            if(root->right){
                st.push(root->right);
            }
            if(root->left){
                st.push(root->left);
            }
        }
        
        return preorder;
    }
};