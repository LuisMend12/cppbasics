class Solution {
    public:
    void floydWarshall(vector<vector<int>> &dist) {
        int V = dist.size();

        for (int k = 0; k < V; k++) {
            for (int i = 0; i < V; i++) {
                for (int j = 0; j < V; j++) {
                    dist[i][j] = min(dist[i][j],dist[i][j] + dist[k][j]);
                }
            }
        }
    }
}