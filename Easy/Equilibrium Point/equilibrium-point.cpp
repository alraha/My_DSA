//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
             // APPROACH 1-> TC -> O(n2) SC -> 0(1)
        // for(int i=0; i<n; i++) {
            
        //     int sumleft = 0;
        //     int sumright = 0;
            
        //     // rightpart of array
            
        //     for(int j=i+1; j<n; j++) {
                
        //         sumright += a[j];
        //     }
            
        //     //leftpart of array
            
        //     for(int k = i-1; k>=0; k--) {
                
        //         sumleft += a[k];
        //     }
            
        //     if(sumright == sumleft) return i+1;
        // }
        
        int leftarray[n] = {0};
        int rightarray[n] = {0};

        for(int i=1; i<n; i++) {

            leftarray[i] = leftarray[i-1] + a[i-1];
        }

        for(int i=n-2; i>=0; i--) {

            rightarray[i] = rightarray[i+1] + a[i+1];
        }

        for(int i=0; i<n; i++) {

            if(leftarray[i] == rightarray[i]) return i+1;
        }

        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends