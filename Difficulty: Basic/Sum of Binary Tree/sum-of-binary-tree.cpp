/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
       void sum(Node*root,int &sum1)
       {
           if(root==NULL)
           return;
           
           sum1+=root->data;
           sum(root->left,sum1);
           sum(root->right,sum1);
       }
    int sumBT(Node* root) {
        // code here
        int sum1=0;
        sum(root,sum1);
        return sum1;
    }
};