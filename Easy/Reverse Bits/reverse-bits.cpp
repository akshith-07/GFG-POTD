//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        int i=31;
        long long sum=0;
        while(x){
            int rem = x%2;
            if(rem==1) sum += pow(2,i);
            i--;
            x=x/2;
        }
        return sum;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends