//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        int maxelement=0;
        for(int i=n-1;i>=0;i--){
            mp[i]=maxelement;
            maxelement=max(maxelement,arr[i]);
        }
        int prevMax=0;
        int futMax=0;
        int ans=0;
        for(int i=0;i<n;i++){
            futMax=mp[i];
            int waterContain=min(futMax,prevMax)-arr[i];
            if(waterContain>0){
                ans+=waterContain;
            }
            prevMax=max(prevMax,arr[i]);
        }
        return ans;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends