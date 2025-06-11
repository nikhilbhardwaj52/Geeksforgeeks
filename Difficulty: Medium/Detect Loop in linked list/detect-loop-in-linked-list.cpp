/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        
        Node* curr=head;
        unordered_map<Node*,bool>visited;
        while(curr!=NULL)
        {
            if(visited[curr]==1)
            return true;
            
            visited[curr]=1;
            curr=curr->next;
        }
        return false;
    }
};