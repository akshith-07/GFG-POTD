//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   int minValue(string s, int k){
        // code here
        if(s.length()==1 && k>2)    return k-s.length();
        unordered_map<char,int>ump;
        for(int i=0;i<s.length();i++)
            ump[s[i]]++;
        vector<int>vec;
        for(auto it:ump)
            vec.push_back(it.second);
        int result=0;
        int size=vec.size();
        while(k>0){
            sort(vec.begin(),vec.end());
            vec[size-1]--;
            k--;
        }
        for(int i=0;i<vec.size();i++)
            result+=vec[i]*vec[i];
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends