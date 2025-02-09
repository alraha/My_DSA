//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int target) {
        int n=arr.size();
        int k=target;
        vector<vector<int>> dp(n,vector<int>(target+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=1;
        }
        if(arr[0]<=target){
            dp[0][arr[0]]=1;
        }
        for(int i=1;i<n;i++){
           for(int tar=1;tar<=target;tar++){
               bool nottake=dp[i-1][tar];
               bool take=false;
               if(arr[i]<=tar){
                  take=dp[i-1][tar-arr[i]];
               }
               dp[i][tar]=take|| nottake;
           }
        }
        return dp[n-1][target];
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends