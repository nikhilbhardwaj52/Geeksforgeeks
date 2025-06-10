/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        
        Node*curr=head;
        while(pos--)
        {
            curr=curr->next;
        }
        if(curr->next==NULL)
        {
            
        
        Node* add=new Node(data);
        curr->next=add;
        add->prev=curr;
        }
        else{
            Node*add=new Node(data);
            add->next=curr->next;
            add->prev=curr;
            curr->next=add;
            add->next->prev=add;
            
        }
        
    return head;    
    }
};