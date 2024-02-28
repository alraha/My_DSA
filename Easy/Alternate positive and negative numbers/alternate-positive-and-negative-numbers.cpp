//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
    int arr_ind=0;
    int a=0;
    int b=0;
    int ind=0;
    while(a<pos.size() && b<neg.size()){
        if(ind%2==0){
            arr[arr_ind]=pos[a];
            a++;
            arr_ind++;
            ind++;
        }else{
            arr[arr_ind]=neg[b];
            b++;
            arr_ind++;
            ind++;
        }
    }
    if(a<pos.size()){
        while(a<pos.size()){
            arr[arr_ind]=pos[a];
            a++;
            arr_ind++;
        }
    }
    if(b<neg.size()){
        while(b<neg.size()){
            arr[arr_ind]=neg[b];
            b++;
            arr_ind++;
        }
    }

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends