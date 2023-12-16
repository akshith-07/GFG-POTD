//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
    
     long long ans = 1; //for all a's
    ans += (n); //for 1b, 0c
    ans += (n); //for 1c, 0b
    ans += (n*(n-1)); //for 1c, 1b
    ans += ((n*(n-1))/2); //for 2c, 0b (nc2)
    
    ans += (n*(n-1)*(n-2))/2;//for 1b and 2c (n* (n-1)c2)
    
    return ans;
}