/* A binary tree node


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
    void binary(Node* r,vector<int>&arr)
    {  
        
         if(r==NULL)return;
        
        arr.push_back(r->data);
        binary(r->left,arr);
        binary(r->right,arr);
    }
    // Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2) {
        vector<int>arr1;
        vector<int>arr2;
        // Your Code here
        binary(r1,arr1);
        binary(r2,arr2);
        
        if(arr1.size()!=arr2.size())
        {
            return false;
        }
        else{
            for(int i=0;i<arr1.size();i++)
            {
                if(arr1[i]!=arr2[i])
                {
                    return false;
                }
        
            }
            return true;
            
        }
    }
};