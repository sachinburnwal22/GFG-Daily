class Solution {
  public:
    
    void dfs(int node, vector<vector<int>>& adj, vector<int>& ans, vector<int>& vis){
        vis[node] = 1;
        ans.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it, adj, ans, vis);
                
            }
        }
    }
    
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> vis(adj.size(), 0);
        vector<int> res;
        int node = 0;
        dfs(node, adj, res, vis);
        return res;
    }
};