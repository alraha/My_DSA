//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
         int n = height.size();
      vector<int> dp (n,-1);
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