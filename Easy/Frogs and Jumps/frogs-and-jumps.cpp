//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        
        // Initialising visited vector for leaves,
	// and marking them as not vistied initially
	vector<bool> visited(leaves + 1, false);

	// Intialising unvisited leaevs count by total
	// number of leaves
	int unvisitedLeavesCount = leaves;

	// Sorting strength of frogs in increasing order
	sort(frogs, frogs + N);

	// Iterating over all frogs
	for (int i = 0; i < N; ++i) {
		int strength_i = frogs[i];

		// If strength is 1, the frg is going to
		// visit all leaves so we can return 0,
		// since no leaves is going to be left unvisited
		if (strength_i == 1)
			return 0;

		// Skipping iteration for this frog as it
		// will not visit any leaf
		if (strength_i > leaves)
			continue;

		// Skipping iteration as leaves for this
		// frog are already visited
		if (visited[strength_i] == true)
			continue;

		// If leaves of this frog are not visited
		// We go through all the leaves ith frog
		// will visit and mark the leaves as visited
		for (int j = strength_i; j <= leaves;
			j += strength_i) {

			// Decreasing number of leaves not
			// visited by 1 if the leaf is not visited
			// in any jump of other frog
			if (visited[j] == false)
				unvisitedLeavesCount--;

			// Marking leaf as visited
			visited[j] = true;
		}
	}

	return unvisitedLeavesCount;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends