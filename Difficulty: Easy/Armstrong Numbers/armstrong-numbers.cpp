// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num=n;
        int ans=0;
        int k=to_string(n).length();
        
        while(n>0)
        {
            int ld=n%10;
            ans+=pow(ld,k);
            n/=10;
        }
    
       if(num==ans)
       {
           return 1;
       }
       
      return 0;
    }
};