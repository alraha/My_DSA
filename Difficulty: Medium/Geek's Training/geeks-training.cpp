//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(3, -1));
        for(int i=0;i<3;i++){
            dp[0][i] = arr[0][i];
        }
        
        for(int i=1;i<n;i++){
            for(int last = 0;last<3;last++){
                int maxi = 0;
                for(int j=0;j<3;j++){
                    if(j!=last) maxi = max(maxi, dp[i-1][j]);
                }
                dp[i][last] =  maxi+arr[i][last];
            }
        }
        return max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends