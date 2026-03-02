class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
       int high = INT_MIN;
       int index = 0;
       int n = arr.size();
       int ans=0;
       
       for(int i=0;i<n;i++){
           if(high<arr[i]){
               high=arr[i];
               index=i;
           }
       }
       
       high=arr[0];
       
       for(int i=0;i<index;i++){
           high=max(high,arr[i]);
           ans+=(high-arr[i]);
       }
       
       high=arr[n-1];
       for(int i=n-1;i>index;i--){
           high=max(high,arr[i]);
           ans+=(high-arr[i]);
       }
       
       return ans;
    }
};