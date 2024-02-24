//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int N)
        {
            vector<int> dp(N+1,0);
            for(int n=0;n<=N;n++){
                int ans = 0;
                ans += max(n/2,dp[n/2]);
                ans += max(n/3,dp[n/3]);
                ans += max(n/4,dp[n/4]);
                
                dp[n] = ans;
            }
            
            return max(N,dp[N]);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends