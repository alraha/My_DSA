//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
    string temp = "";
     string ans = "";
    for( int i = S.size(); i >= 0 ; i--)
        {
            if( S[i] == '.' ){
              
                ans += temp + '.';
                temp = "";
            }
            
            else temp = S[i] + temp;
        }
        
       
        ans += temp;
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends