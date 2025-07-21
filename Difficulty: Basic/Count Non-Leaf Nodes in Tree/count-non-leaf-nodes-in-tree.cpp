/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
          
          void CountNonleaf(Node* root,int &count)
          {
              if(root==NULL)
              return;
              
              if(!root->left&&!root->right)
                return;
                
              else if(root->left||root->right)
               {
                   count++;
               }
              
              CountNonleaf(root->left,count);
              CountNonleaf(root->right,count);
          }
    int countNonLeafNodes(Node* root) {
        int count=0;
        // Code here
        CountNonleaf(root,count);
        return count;
           
    }
};