//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        
        stack<char> st;
        int len = s.length();
        
        for(int i = 0; i < len; i++)
        {
            char ch = s[i];
            
            if(s[i] == '{' || s[i] == '(' || s[i] == '[') st.push(s[i]);
            
            else if(st.size() == 0) return false;
            
            else if(s[i] == '}')
            {
                
                if(st.top() == '{') st.pop();
                
                else return false;
            }
            
            else if(s[i] == ']')
            {
                
                if(st.top() == '[') st.pop();
                
                else return false;
            }
            
            else if(s[i] == ')')
            {
                
                if(st.top() == '(') st.pop();
                
                else return false;
            }
        }
        
        return (st.size() == 0);
    }
};
 





//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends