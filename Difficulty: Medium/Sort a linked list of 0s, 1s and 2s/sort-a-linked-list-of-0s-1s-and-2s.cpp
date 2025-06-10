/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int countzeroes=0;
        int countones=0;
        int counttwos=0;
        
        Node*temp=head;
      while(temp!=NULL)
      {
          if(temp->data==0)
          { countzeroes++;
              
          }
         else if(temp->data==1)
          {
              countones++;
          }
          else
          {
              counttwos++;
          }
          temp=temp->next;
      }
      temp=head;
      while(countzeroes--)
      {
          temp->data=0;
          temp=temp->next;
          
      }
      while(countones--)
      {
          temp->data=1;
          temp=temp->next;
      }
      while(counttwos--)
      {
          temp->data=2;
         temp= temp->next;
      }
      return head;
    }
};