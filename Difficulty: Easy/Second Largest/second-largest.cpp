class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int lar=arr[0];
        int sec=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>lar)
            {
            sec=lar;
            lar=arr[i];
            }
            else if(arr[i]>sec&&arr[i]!=lar)
            sec=arr[i];
        }
        return sec;
    }
};