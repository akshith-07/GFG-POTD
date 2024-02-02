//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
   int atoi(string s) {
        //Your code here        

        int sign = +1;
        int i=0;
        int ans=0;
        if(s[0] == '-')
        {
            sign = -1;
            i++;
        }
        
        for( i; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int n = s[i]-'0';
                ans = ans*10 + n;
            }
            else
            {
                return -1;
            }
        }
        return ans*sign;

}
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends