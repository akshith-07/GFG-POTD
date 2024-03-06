//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int asc(char c){
            return c-'a'+1;
        }
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> ans;
            int l=0;
            int n=text.size();
            int m=pattern.size();
            // unordered_map<string, int> hash;
            int s=0;
            int p=0;
            for(int i=0;i<m;i++){
                s=s+asc(text[i]);
                p=p+asc(pattern[i]);
            }
            int r=m-1;
            while(r<n){
                if(s==p){
                    int x=l;
                    int j=0;
                    while(j<m){
                        if(text[x]!=pattern[j]){
                            break;
                        }
                        x++;
                        j++;
                    }
                    if(j==m){
                      ans.push_back(l+1);
                    }
                }
                s=s-asc(text[l]);
                l++;
                r++;
                if(r<n){
                    s=s+asc(text[r]);
                }
            }
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends