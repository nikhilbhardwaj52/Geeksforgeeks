//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int digit=0;
        if(n==0)
        {
            return 0;
            
        }
        int m=n;
        while(m>0)
        {
        int last=m%10;
        
        if(last!=0&&n%last==0){
        digit++;
        }
        
        m=m/10;
        
        
        }
   return digit;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends