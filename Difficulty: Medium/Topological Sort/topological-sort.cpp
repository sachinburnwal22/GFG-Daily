class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        unordered_map<int, vector<int>> adj;
        for(auto &it : edges){
            int u = it[0];
            int v = it[1];
            
            adj[u].push_back(v);
        }
        
        queue<int> q;
        vector<int> indegree(V, 0);
        
        for(int u=0; u<V; u++){
            for(int &v : adj[u]){
                indegree[v]++;
            }
        }
        
        for(int i=0; i<V; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        vector<int> result;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            result.push_back(node);
            for(int &v : adj[node]){
                indegree[v]--;
                if(indegree[v] == 0)
                    q.push(v);
            }
        }
        
        return result;
    }
};