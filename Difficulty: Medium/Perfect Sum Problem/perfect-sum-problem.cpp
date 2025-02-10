//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
       int n=arr.size();
         vector<vector<int>> dp(n, vector<int> (target+1,0));
        // n * m : index * target
        dp[0][0] = 1 + (arr[0]==0);
        
        for(int i=1;i<n;i++)
            dp[i][0]=1;
        
        if(arr[0]!=0 && arr[0]<=target)
            dp[0][arr[0]]=1;
        
        for(int i=1;i<n;i++)
            for(int j=0;j<=target;j++)
            {
                int pick=0, npick=dp[i-1][j];
                if(j>=arr[i])
                    pick=dp[i-1][j-arr[i]];
                
                dp[i][j]=npick + pick;
            }
        
        return dp[n-1][target];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends