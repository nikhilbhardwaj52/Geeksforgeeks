/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode*end=head;
        while(end->next!=NULL)
        {
            
            end=end->next;
            
        }
        DLLNode*start=head;
        while(start!=end && start->prev!=end)
        {
            swap(start->data,end->data);
            start=start->next;
            end=end->prev;
            
        }
        
        return head;
    }
};