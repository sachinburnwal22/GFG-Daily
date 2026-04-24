class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int, int>> q;
        vector<vector<int>> dist(n, vector<int>(m, -1));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        
        vector<int> dr = {-1, 0, 1, 0};
        vector<int> dc = {0, 1, 0, -1};
        
        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();
            
            for(int i=0; i<4; i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                
                if(nr >= 0 && nr < n && nc >= 0 && nc < m && dist[nr][nc] == -1){
                    q.push({nr, nc});
                    dist[nr][nc] = dist[r][c] + 1;
                }
            }
        }
        return dist;
    }
};