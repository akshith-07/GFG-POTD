class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        // int ans = n+k;  
        int l = 0;
        int h = n-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            // cout<<l<<" "<<mid<<" "<<h<<endl; 
            if(arr[mid]-(mid+1)<k){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        // for(int i=0;i<n;i++){
        //     if(arr[i]-(i+1)>=k){
        //         ans = i+k;
        //         break;
        //     } 
        // }
       // return ans;
        return l+k;
    }
};