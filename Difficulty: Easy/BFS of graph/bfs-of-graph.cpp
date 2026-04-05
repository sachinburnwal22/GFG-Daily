class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int> q;
        q.push(0);
        vector<int> res;
        vector<int> vis(adj.size(), 0);
        vis[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            res.push_back(node);
            
            for(int i=0; i<adj[node].size(); i++){
                if(!vis[adj[node][i]]){
                    vis[adj[node][i]] = 1;
                    q.push(adj[node][i]);
                }
            }
        }
        
        return res;
    }
};