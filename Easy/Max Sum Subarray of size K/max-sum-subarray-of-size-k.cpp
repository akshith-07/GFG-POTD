//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        
         long long int sum = 0;
        long long int checkSum = 0;
        int i=0, j=0;
        for(i=0; i<K; i++){
            sum += Arr[i];
        }
        i = K;
        checkSum = sum;
        while(i<N){
            checkSum = checkSum + Arr[i] - Arr[j];
            sum = max(sum, checkSum);
            i++;
            j++;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends