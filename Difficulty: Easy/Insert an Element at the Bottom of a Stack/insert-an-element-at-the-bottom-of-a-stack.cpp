// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
            
        }
        st.push(x);
        int i=0;
         for (int i = ans.size() - 1; i >= 0; i--) {
            st.push(ans[i]);
        }
        
      return st;  
        }
};