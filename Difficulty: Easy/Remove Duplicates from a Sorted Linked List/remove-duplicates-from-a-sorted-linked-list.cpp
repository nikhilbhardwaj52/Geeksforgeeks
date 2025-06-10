/*
struct Node {
  int val;
  struct Node *next;
  Node(int x) {
    val = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node* curr=head->next;
        Node*prev=head;
        while(curr)
        {
            if(curr->data==prev->data)
            {
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
                
            }
            else{
            curr=curr->next;
            prev=prev->next;
            }
        }
        return head;
    }
};