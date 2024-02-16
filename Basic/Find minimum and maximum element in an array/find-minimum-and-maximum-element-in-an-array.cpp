//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        
         pair<long long, long long> p;
         p.first=INT_MAX;//mistake
                  p.second=INT_MIN; //mistake
                  for(int i=0;i<n;i++)
                  {
                      if(a[i]<p.first)
                      {
                          p.first=a[i];
                      }
                      
                       if(a[i]>p.second)
                      {
                          p.second=a[i];
                      }
                  }

         return p;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends