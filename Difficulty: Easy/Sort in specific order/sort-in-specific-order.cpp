//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
       vector<long long> v1,v2;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                v1.push_back(arr[i]);
            }
            
            else{
                v2.push_back(arr[i]);
            }
        }
        
        sort(v1.rbegin(), v1.rend());
        sort(v2.begin(), v2.end());
        
        int k=0;
        for(int i=0;i<v1.size();i++){
            arr[k]=v1[i];
            k++;
        }
        
        for(int i=0;i<v2.size();i++){
            arr[k]=v2[i];
            k++;
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.sortIt(arr);

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends