//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    void insert(vector<int> &arr, int val, int &pos){
        if(pos == -1 || arr[pos] != val){
            arr.push_back(val);
            pos++;
        }
    }
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> arr;
        int i=0,j=0,pos=-1;
        while(i < n && j < m){
            if(arr1[i] > arr2[j]){
                insert(arr,arr2[j],pos);
                j++;
            }else if(arr1[i] < arr2[j]){
                insert(arr,arr1[i],pos);
                i++;
            }
            else{
                insert(arr,arr1[i],pos);
                i++;
                j++;
            }
        }
        while(i < n){
            insert(arr,arr1[i],pos);
            i++;
        }
        while(j < m){
            insert(arr,arr2[j],pos);
            j++;
        }
        return arr;
    }
};



//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends