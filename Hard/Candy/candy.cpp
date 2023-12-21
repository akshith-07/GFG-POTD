//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int n, vector<int> &a) {
        // code here
        
         vector<int> dp(n,1);
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1]) dp[i]=dp[i-1]+1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>a[i+1])
            {
                dp[i]=max(dp[i],dp[i+1]+1);
            }
        }
        int ans=0;
        for(auto it:dp)
        {
            ans+=it;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends