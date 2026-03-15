class Solution {
public:

    Node* createLL(vector<int> &vec, Node* root){
        Node* temp = root;

        for(int i = 1; i < vec.size(); i++){
            Node* curr = new Node(vec[i]);

            temp->bottom = curr;
            temp = temp->bottom;
        }

        return root;
    }

    Node *flatten(Node *root) {

        if(root == NULL) return NULL;

        vector<int> vec;

        Node* temp = root;

        while(temp){

            vec.push_back(temp->data);

            Node* tempdown = temp->bottom;

            while(tempdown){
                vec.push_back(tempdown->data);
                tempdown = tempdown->bottom;
            }

            temp = temp->next;
        }

        sort(vec.begin(), vec.end());

        Node* result = new Node(vec[0]);

        return createLL(vec, result);
    }
};