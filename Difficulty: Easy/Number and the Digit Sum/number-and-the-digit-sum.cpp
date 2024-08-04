//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    long long int getSum(long long int num)
    {
        long long int sum =0;
        while(num!=0)
        {
            sum+= num%10;
            num=num/10;
        }
        return sum;
    }
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
             long long int ans = 0;
            for (int i =0; i<= N; i++)
            {
                if((i-getSum(i))>= K)
                {
                    ans+=1;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends