class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        int n = s.length();
        string unique = "";
        vector<int> cnt(26, 0);
        string ans;
        int nri = 0;
        
        for(int i = 0; i < n; i++) 
        {
            cnt[s[i] - 'a']++;
            
            if(cnt[s[i] - 'a'] == 1) {
                unique += s[i];
            }
            else
            {
                while(cnt[unique[nri] - 'a'] > 1 && nri < unique.length()) {
                    nri++;
                }
            }
            
            if(nri >= unique.length()) ans.push_back('#');
            else ans.push_back(unique[nri]);
            
        }
        
        return ans;
        
    }
};