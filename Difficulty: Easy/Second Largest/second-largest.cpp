class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int lar=arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>lar)
            {
                lar=arr[i];
            }
        }
        
        int sec=-1;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==lar)
            {
                continue;
            }
            else if(arr[i]>sec)
            {
                sec=arr[i];
            }
        }
        return sec;
    }
};