//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int> &a)
{
    int l = 1;
    int r = a.size() - 2;
    if (a[0] > a[l])
        return a[0];
    if (a[r + 1] > a[r])
        return a[r + 1];
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
        {
            return a[mid];
        }
        else if (a[mid - 1] < a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
}
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends