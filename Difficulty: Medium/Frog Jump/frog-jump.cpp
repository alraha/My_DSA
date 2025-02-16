//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int solve(int n,vector<int>& height,vector<int>& dp)
  {
      if(n==0)
      {
          return 0;
      }
      if(dp[n]!=-1) return dp[n];
      int jum2 = INT_MAX;
      int jum1=solve(n-1,height,dp)+abs (height[n-1]-height[n]);
       if(n>1)
        jum2 = solve(n-2, height,dp)+ abs(height[n]-height[n-2]);
         return dp[n]=min(jum1, jum2);
      
  }
    int minCost(vector<int>& height) {
        // Code here
         int n = height.size();
      vector<int> dp (n,-1);
      /*
      int prev1 = 0;
      int prev2 = -1;
      int minCost = INT_MAX;
      for(int i = 1;i < n ; i++){
        if(i == 1)
        minCost = prev1 + abs(height[i] - height[i-1]);
        else{
            minCost = min(prev1 + abs(height[i] - height[i-1]),
                          prev2 +abs(height[i] - height[i-2]));
        }
        prev2 = prev1;
        prev1 = minCost;
      }
      return prev1;
      */
      return solve(n-1,height,dp);
    }
};

//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends