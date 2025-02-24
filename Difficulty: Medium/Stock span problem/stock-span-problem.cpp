//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<pair<int,int>>st;
        vector<int>ans;
        ans.push_back(1);
        st.push({arr[0],1});
        int count=0;
        bool flag;
        for(int i=1;i<arr.size();i++){
            count=1;
            flag=false;
            while(!st.empty()){
                int topfirst=st.top().first;
                int topsecond=st.top().second;
                if(topfirst>arr[i]){
                    st.push({arr[i],count});
                    ans.push_back(count);
                    break;
                }else{
                    st.pop();
                    count=count+topsecond;
                    flag=true;
                    
                }
            }
            
            if(flag=true&&st.size()==0){
            st.push({arr[i],count});
            ans.push_back(count);
            }
            
        }
        return ans;
        
    }


};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends