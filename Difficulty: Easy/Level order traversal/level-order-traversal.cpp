/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        vector<vector<int>>vt;
        vector<int>vvt;
        
        
        queue<Node*>q;
        
        
        q.push(root);
        Node* temp;
       
        
        while(!q.empty())
        {
             vector<int>vtt;
            temp=q.front();
            q.pop();
   vvt.push_back(temp->data);
           
            
            if(temp->left)
            q.push(temp->left);
          
            
            if(temp->right)
            q.push(temp->right);
             
            
            
        }
        vt.push_back(vvt);
        
        return vt;
    }
};