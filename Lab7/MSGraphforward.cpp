#include <iostream>
#include <climits>
using namespace std;

#define INF INT_MAX
#define MAX_N 10

void multistageForward(int n, int graph[MAX_N][MAX_N]) {
    int cost[MAX_N];
    int parent[MAX_N];

    cost[0] = 0;

    for(int j = 1; j < n; j++) {
        cost[j] = INF;

        for(int i = 0; i < j; i++) {
            if(graph[i][j] != INF && cost[i] != INF) {
                if(graph[i][j] + cost[i] < cost[j]) {
                    cost[j] = graph[i][j] + cost[i];
                    parent[j] = i;
                }
            }
        }
    }

    cout << "Forward Minimum Cost: " << cost[n-1] << endl;

    int path[MAX_N];
    int k = 0;
    int cur = n-1;

    while(cur != 0) {
        path[k++] = cur;
        cur = parent[cur];
    }
    path[k++] = 0;

    cout << "Path: ";
    for(int i = k-1; i >= 0; i--) {
        cout << path[i] + 1;
        if(i != 0) cout << " -> ";
    }
    cout << endl;
}

int main() {
    int n = 10;
    
    int graph[MAX_N][MAX_N] = {
        {INF,   3,   4,   5, INF, INF, INF, INF, INF, INF}, 
        {INF, INF, INF, INF,   8,   7, INF, INF, INF, INF}, 
        {INF, INF, INF, INF, INF,   1,   6, INF, INF, INF}, 
        {INF, INF, INF, INF,   9,   4,   6, INF, INF, INF}, 
        {INF, INF, INF, INF, INF, INF, INF,   2,   5, INF}, 
        {INF, INF, INF, INF, INF, INF, INF,   9, INF, INF}, 
        {INF, INF, INF, INF, INF, INF, INF, INF,   7, INF}, 
        {INF, INF, INF, INF, INF, INF, INF, INF, INF,   4}, 
        {INF, INF, INF, INF, INF, INF, INF, INF, INF,   8}, 
        {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF}   
    };
    
    cout << "Multistage Graph - Forward DP Approach:\n";
    multistageForward(n, graph);
    
    return 0;
}