class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int first=arr[0];
        int sec=-1;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>first)
            {
                sec=first;
                first=arr[i];
                
            }
            else if(arr[i]<first&&arr[i]>sec)
            {
                sec=arr[i];
            }
        }
        return sec;
    }
};