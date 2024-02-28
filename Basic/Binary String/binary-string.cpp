//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        /*
        int res = 0; // Initialize result
 
    // Pick a starting point
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '1') {
            // Search for all possible ending point
            for (int j = i + 1; a[j] != '\0'; j++)
                if (a[j] == '1')
                    res++;
        }
    }
        return res;

    */
    
    int m = 0; // Count of 1's in input string
 
    // Traverse input string and count of 1's in it
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '1')
            m++;
    }
 
    // Return count of possible pairs among m 1's
    return m * (m - 1) / 2;
    }

};

//{ Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}

// } Driver Code Ends