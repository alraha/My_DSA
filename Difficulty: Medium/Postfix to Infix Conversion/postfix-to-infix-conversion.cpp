//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        // Write your code here
                 string res="",s1,s2;
                  stack<string> st;
                   for(int i=0;i<=exp.length()-1;i++)
                   {
                        if(exp[i]>='A'&&exp[i]<='Z'||exp[i]>='a'&&exp[i]<='z'||exp[i]>='0'&&exp[i]<='9')
            st.push(string(1,exp[i]));
            else
            {
               s1=st.top();
               st.pop();
               s2=st.top();
               st.pop();
               res='('+s2+exp[i]+s1+')';
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
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);

    return 0;
}

// } Driver Code Ends