//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     void subset(vector<int>&arr,vector<int>&temp,int index,vector<int>&tempp)
     {
         if(index==arr.size())
         {
            int sum=0;
            for(int i=0;i<temp.size();i++)
            {
                sum+=temp[i];
                
            }
            tempp.push_back(sum);
            return;
         }
         
         
         temp.push_back(arr[index]);
         subset(arr,temp,index+1,tempp);
         temp.pop_back();
         
         subset(arr,temp,index+1,tempp);
         
         
         
        
     }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>temp;
        vector<int>tempp;
        
        subset(arr,temp,0,tempp);
        return tempp;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input

    while (t--) {
        vector<int> inputArray;
        string inputLine;

        // Input format: first number n followed by the array elements
        getline(cin, inputLine);
        stringstream inputStream(inputLine);
        int num;
        while (inputStream >> num) {
            inputArray.push_back(num); // Read the array elements from input string
        }

        Solution solutionObject;
        vector<int> result = solutionObject.subsetSums(inputArray);
        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout
            << endl
            << "~\n"; // Print results in list format with new line after each test case
    }

    return 0;
}

// } Driver Code Ends