/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr){
            Node* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        
        return prev;
        
    }
};