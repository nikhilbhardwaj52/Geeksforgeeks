/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        Node* curr=head;
        Node* prev=NULL;
        unordered_map<Node*, bool> visited;
        while(curr!=NULL)
        {
            if(visited[curr]==1)
            {
                prev->next=NULL;
                return ;
                
            }
          visited[curr]=1;
          prev=curr;
          curr=curr->next;
          
        }
        
    }
};