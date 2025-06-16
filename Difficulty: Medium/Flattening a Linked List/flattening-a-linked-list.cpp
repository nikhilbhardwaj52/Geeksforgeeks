/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
  
  
  
        Node* merge(Node*head1,Node*head2)
        {
            Node* head=new Node(0);
            Node*tail=head;
            
            while(head1&&head2)
            {
                if(head1->data<=head2->data)
                {
                    tail->bottom=head1;
                    head1=head1->bottom;
                     tail=tail->bottom;
                    tail->bottom=NULL;
                }
                else{
                     tail->bottom=head2;
                    head2=head2->bottom;
                     tail=tail->bottom;
                    tail->bottom=NULL;
                }
            }
            if(head1)
            {
                tail->bottom=head1;
            }
            else{
                tail->bottom=head2;
            }
            return head->bottom;
        }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        
        
        while(root->next)
        {
           Node*head1=root;
          Node*  head2=root->next;
            Node*head3=root->next->next;
            
            head1->next=NULL;
            head2->next=NULL;
            
            merge(head1,head2);
            root->next=head3;
            
        }
    
      return root;
    }
};