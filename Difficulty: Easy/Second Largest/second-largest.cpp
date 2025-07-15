class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first=INT_MIN;
        int sec=INT_MIN;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>first)
            {
                first=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=first&&arr[i]>sec)
            {
                sec=arr[i];
            }
            
        }
         return (sec == INT_MIN) ? -1 : sec;
    }
};