#include <iostream>
#include <vector>

void dfs(int node, const std::vector<std::vector<int>>& graph, std::vector<bool>& visited) {
    visited[node] = true;
    std::cout << node << ' ';

    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next, graph, visited);
        }
    }
}

int main() {
    // 인접 리스트(정점 번호: 0 ~ 6)
    std::vector<std::vector<int>> graph = {
        {1, 2},    // 0
        {0, 3, 4}, // 1
        {0, 5, 6}, // 2
        {1},       // 3
        {1},       // 4
        {2},       // 5
        {2}        // 6
    };

    std::vector<bool> visited(graph.size(), false);

    std::cout << "DFS traversal from node 0: ";
    dfs(0, graph, visited);
    std::cout << '\n';

    return 0;
}
