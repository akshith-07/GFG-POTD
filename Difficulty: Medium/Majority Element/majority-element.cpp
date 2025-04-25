//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) { // cpp
        int n=arr.size();
        if(n==1) return arr[0];
        if(n==2 && arr[0] !=arr[1]) return -1;
        sort(arr.begin(),arr.end());
        int candidate=arr[n/2];
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i]==candidate) count++;
        }
        if(count>n/2) return candidate;
        return -1;
        
       
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends