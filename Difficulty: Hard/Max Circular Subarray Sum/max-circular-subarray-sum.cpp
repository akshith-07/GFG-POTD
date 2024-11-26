//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();

        // Variables to track sums
        int totalSum = 0;        // Total sum of the array
        int maxEnding = 0;       // Maximum sum ending at the current index
        int minEnding = 0;       // Minimum sum ending at the current index
        int ansMax = INT_MIN;    // Maximum subarray sum for non-circular case
        int ansMine = INT_MAX;   // Minimum subarray sum

        for (int i = 0; i < n; ++i) {
            // Update Kadane's max sum ending at current index
            maxEnding = max(maxEnding + arr[i], arr[i]);
            ansMax = max(ansMax, maxEnding);

            // Update Kadane's min sum ending at current index
            minEnding = min(minEnding + arr[i], arr[i]);
            ansMine = min(ansMine, minEnding);

            // Update the total sum of the array
            totalSum += arr[i];
        }

        // Return the maximum of non-circular and circular cases
        return max(ansMax, totalSum - ansMine);
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
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends