class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
        }
        vector<int>inDegree(V,0);
        for(int i=0;i<V;i++){
            for(int j=0;j<adj[i].size();j++){
                inDegree[adj[i][j]]++;
            }
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<inDegree.size();i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        while(q.size()>0){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(int i=0;i<adj[temp].size();i++){
                inDegree[adj[temp][i]]--;
                 if(inDegree[adj[temp][i]] == 0) {
                    q.push(adj[temp][i]);  // ✅ push to queue when in-degree becomes 0
                }
            }
        }
        return ans;
    }
};