class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
       int mn=INT_MAX;
        for(int x:arr){
            if(x<mn) mn=x;
        }
        return mn;
    }
};