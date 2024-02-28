//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int DivisibleByEight(string s) {
        // last three digits should be divisible by 8
        int n = s.size(), num = 0;
        for (int i = n < 4 ? 0 : n - 3; i < n; i++)
            num = (num * 10) + (s[i] - '0');
    
        return num % 8 == 0 ? 1 : -1;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends