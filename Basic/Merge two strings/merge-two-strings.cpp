//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    
    
     int i=0,j=0;
int s1=S1.size();
int s2=S2.size();
string result;
while(i<s1 && j<s2){
    result=result+S1[i];
    result=result+S2[j];
    i++,j++;
}
while(i<s1){
    result=result+S1[i];
    i++;
}
while(j<s2){
    result=result+S2[j];
    j++;
}
    return result; 
}