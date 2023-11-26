//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(vector<int>&ans,int n){
       if(n>0){ ans.push_back(n);
        ans.push_back(solve(ans,n-5));
           return n+5;
       }
        else
{        ans.push_back(n);
    return n+5;
}
        
    }
    vector<int> pattern(int n){
        // code here
        vector<int>ans;
        int s=solve(ans,n);
        
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends