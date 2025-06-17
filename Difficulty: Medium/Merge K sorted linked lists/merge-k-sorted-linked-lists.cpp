/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
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
             tail->next=head1;
             head1=head1->next;
             tail=tail->next;
             tail->next=NULL;
          }
          else{
               tail->next=head2;
             head2=head2->next;
             tail=tail->next;
             tail->next=NULL;
          }
      }
      if(head1)
      {
          tail->next=head1;
      }
      else{
          tail->next=head2;
      }
      return head->next;
  }
    Node* mergeKLists(vector<Node*>& arr) {
        int n = arr.size();
        if (n == 0) return NULL;

        Node* root = arr[0];

        // Merge one by one in your style
        for (int i = 1; i < n; i++) {
            root = merge(root, arr[i]);
        }

        return root;
    }
};