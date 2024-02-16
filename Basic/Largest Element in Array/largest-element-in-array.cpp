//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        if(arr.empty())
        {
            return -1;
        }
        int max= arr[0];
        
        for(int i=0;i<arr.size();i++)
        {
             if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
        }
        
        return max;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends