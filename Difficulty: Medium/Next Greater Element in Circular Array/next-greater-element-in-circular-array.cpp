class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>a(n,-1);
        stack<int>st;
        
        for(int i=0;i<2*n-1;i++)
        {
            if(st.empty())
            {
                st.push(i%n);
            }
            else
            {
                while(!st.empty()&&arr[st.top()]<arr[i%n])
                {
                    a[st.top()]=arr[i%n];
                    st.pop();
                }
                
              st.push(i%n);
            }
        }
    return a;
    }
};