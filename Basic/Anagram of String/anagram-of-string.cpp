//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
vector<int>count1(26,0);
vector<int>count2(26,0);
for(int i=0; i<str1.size(); i++)
{
    char s=str1[i];
    int num=0;
    num=s-'a';
    count1[num]++;
}
for(int i=0; i<str2.size(); i++)
{
    char s=str2[i];
    int num=0;
    num=s-'a';
    count2[num]++;
}
int ism=0;
for(int i=0; i<26; i++)
{
    if(count1[i]>count2[i])
    {
        ism+=count1[i]-count2[i];
    }
    else
    {
        ism+=count2[i]-count1[i];
    }
}
return ism;
}