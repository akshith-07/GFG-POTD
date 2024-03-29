//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int findShortestPath(vector<vector<int>> &mat)
    {
       // code here
       int r = mat.size(), c = mat[0].size();
       int dir[5] = {-1, 0, 1, 0, -1};
       
       for(int i=0; i<r; i++)
       {
           for(int j=0; j<c; j++)
           {
               if(mat[i][j] == 0)
               {
                   for(int d=0; d<4; d++)
                   {
                       int x = i+dir[d], y = j+dir[d+1];
                       
                       if(x >= 0 and x < r and y >= 0 and y < c and mat[x][y] == 1)
                        mat[x][y] = 2;
                   }
               }
           }
       }
       
       vector<vector<bool>> visited(r, vector<bool> (c, false));
       queue<pair<int,int>> Q;
       
       for(int i=0; i<r; i++)
       {
           if(mat[i][0] == 1)
           {
               Q.push({i,0});
               visited[i][0] = true;
           }
       }
       
       int level = 1;
       
       while(!Q.empty())
       {
           int sz = Q.size();
           
           while(sz--)
           {
               auto cur = Q.front();
               Q.pop();
               
               int X = cur.first, Y = cur.second;
               
               if(Y == c-1)
                    return level;
                
                for(int d=0; d<3; d++)
                {
                    int x = X+dir[d], y = Y+dir[d+1];
                    
                    if(x >= 0 and x < r and y >= 0 and y < c and mat[x][y] == 1 and !visited[x][y])
                    {
                        Q.push({x,y});
                        visited[x][y] = true;
                    }
                }
           }
           
           level++;
       }
       
       return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends