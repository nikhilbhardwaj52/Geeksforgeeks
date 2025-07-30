// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        stack<Node*>st;
        vector<int>vect;
        
        st.push(root);
        
        while(!st.empty())
        {
            Node* temp=st.top();
            vect.push_back(temp->data);
            st.pop();
            if(temp->right)
            st.push(temp->right);
            if(temp->left)
            st.push(temp->left);
            
        }
        return vect;
    }
};