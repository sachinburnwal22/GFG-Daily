/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head){
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
    Node* addOne(Node* head) {
        head = reverse(head);
        
        Node* curr = head;
        int carry = 1;
        while(curr && carry){
            int sum = curr->data + carry;
            curr->data = sum % 10;
            carry = sum / 10;
            if(!curr->next && carry){
                curr->next = new Node(carry);
                carry = 0;
            }
            
            curr = curr->next;
        }
        return reverse(head);
    }
};