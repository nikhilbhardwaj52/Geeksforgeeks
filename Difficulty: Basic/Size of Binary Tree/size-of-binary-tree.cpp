/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
       void binarytree(Node *node,int &count)
       {
           if(node==NULL)
           return;
           
           count++;
           binarytree(node->left,count);
           binarytree(node->right,count);
           
         
       }
    int getSize(Node* node) {
        int count=0;
        binarytree(node,count);
       return count;
        
    }
};