//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<string> palindrome(int i , int j, string & s){
        // int ans = 0;
        string a = "", b = "";
        while (i>=0 && j<s.size()){
            if (s[i]==s[j]){
                // ans+=2;
                a += s[i];
                b += s[j];
            }
            else{
                break;
            }
            i--, j++;
        }
        reverse(a.begin(),a.end());
        return {a,b};
    }
    string longestPalindrome(string &s) {
        int n = s.size();
        // int maxi = 1;
        string maxi = "";
        for (int i=1;i<n-1;i++){
            
            if (s[i-1]==s[i]){
                if(i-2>0){
                    string z = "";
                    z = s[i-1] ;
                    z += s[i];
                    auto ss = palindrome(i-2,i+1,s);
                    z = ss[0] + z + ss[1];
                    maxi = z.size()>maxi.size()?z : maxi;
                }
            }
                string y = "";
                y =  s[i];
                auto ss = palindrome(i-1,i+1,s);
                y = ss[0] + y + ss[1];
                maxi = y.size()>maxi.size()?y : maxi;
            
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends