//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        string res="",s1,s2;
        stack<string> st;
        for(int i=0; i<=post_exp.length()-1;i++)
        {
             if(post_exp[i]>='A'&&post_exp[i]<='Z'||post_exp[i]>='a'&&post_exp[i]<='z'||post_exp[i]>='0'&&post_exp[i]<='9')
            st.push(string(1,post_exp[i]));
            else
            {
                 s1=st.top();
               st.pop();
               s2=st.top();
               st.pop();
               res=string(1,post_exp[i])+s2+s1;
               st.push(res);
            }
        }
         return st.top();
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends