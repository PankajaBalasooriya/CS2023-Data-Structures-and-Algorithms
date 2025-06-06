#include <iostream>
#include <vector>
#include <limits>

#define INF numeric_limits<int>::max()

using namespace std;

// Function to find the vertex with minimum distance value,
// from the set of vertices not yet included in shortest path tree
int minDistance(const vector<int>& dist, const vector<bool>& visited, int V) {
    int minDist = INF, minIndex = -1;

    // <--- TODO: Find the unvisited vertex with the minimum distance

    return minIndex;
}

// Dijkstra's algorithm for single source shortest path
vector<int> dijkstra(const vector<vector<int>>& graph, int src) {
    int V = graph.size();
    vector<int> dist(V, INF); // Initialize distances as infinite
    vector<bool> visited(V, false); // Mark all vertices as not visited

    dist[src] = 0; // Distance of source vertex from itself is always 0

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; ++count) {
        // <--- TODO: Pick the minimum distance vertex from the set of vertices not yet processed --->

        // <--- TODO: Mark the picked vertex as processed --->

        // Update dist value of the adjacent vertices of the picked vertex
        for (int v = 0; v < V; ++v) {
            // <--- TODO: Update dist[v] only if:
            // - it is not in the visited set
            // - there is an edge from u to v
            // - total weight of path from src to v through u is smaller than current value of dist[v]
            // --->
        }
    }

    // Return the shortest distance from src to dest
    return dist;
}

// Function to print shortest distances from source node to all other nodes
void printShortestDistances(const vector<int>& dist) {
    int V = dist.size();
    for (int i = 0; i < V; ++i) {
        cout << "Node " << i << ": " << dist[i] << endl;
    }
}

int main() {
    // <--- TODO: Update the following graph with the correct weighted adjacency matrix --->
    vector<vector<int>> graph = {
        {INF, INF, INF, INF, INF, INF},
        {INF, INF, INF, INF, INF, INF},
        {INF, INF, INF, INF, INF, INF},
        {INF, INF, INF, INF, INF, INF},
        {INF, INF, INF, INF, INF, INF},
        {INF, INF, INF, INF, INF, INF},
    };
    
    int src;
    cin >> src;

    vector<int> dist = dijkstra(graph, src);
    printShortestDistances(dist);

    return 0;
}
