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

// Should return  right view of tree
class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // Your Code here
        vector<int>vect;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            vect.push_back(q.front()->data);
            while(n--)
            {
                Node *temp=q.front();
                q.pop();
                if(temp->right)
                q.push(temp->right);
                if(temp->left)
                q.push(temp->left);
            }
        }
        return vect;
    }
};