class Solution {
  public:
    int n, m;
    vector<int> dr = {-1, 0, 1, 0};
    vector<int> dc = {0, 1, 0, -1};
    
    void bfs(int row, int col, vector<vector<char>>& grid){
        queue<pair<int, int>> q;
        grid[row][col] = '+';
        q.push({row, col});
        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();
            for(int i=0; i<4; i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 'O'){
                    q.push({nr, nc});
                    grid[nr][nc] = '+';
                }
            }
        }
    }
    
    void fill(vector<vector<char>>& grid) {
        // Code here
        n = grid.size();
        m = grid[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 || i == n-1 || j==0 || j==m-1){
                    if(grid[i][j] == 'O'){
                        bfs(i, j, grid);
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '+'){
                    grid[i][j] = 'O';
                }else{
                    grid[i][j] = 'X';
                }
            }
        }
    }
};