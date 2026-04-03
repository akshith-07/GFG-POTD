class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n = mat.size();
        vector<int> res;
        
        for(int i=0; i<2*n-1; ++i){
            for(int j=(i>=n?i-n+1:0), k=min(i, n-1); k>=0 && j<n; ++j, --k){
                res.push_back(mat[j][k]);
            }
        }
        
        return res;
    }
};