//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        
          int n=str1.size();
        string s1="";
        s1=s1+str1[0]+str1[1];
        
        s1=str1.substr(2,n)+s1;
       
        string s3="";
        s3=s3+str1[n-2]+str1[n-1];
        s3=s3+str1.substr(0,n-2);
     
        if(s1==str2)
        {
            return 1;
        }else if(s3==str2)
        {
            return 1;
        }
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends