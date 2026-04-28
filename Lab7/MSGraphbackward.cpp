#include <iostream>
#include <climits>
using namespace std;

#define INF INT_MAX
#define MAX_N 10

void multistageBackward(int n, int graph[MAX_N][MAX_N]) {
    int cost[MAX_N];
    int parent[MAX_N];

    cost[n-1] = 0;

    for(int i = n-2; i >= 0; i--) {
        cost[i] = INF;

        for(int j = i+1; j < n; j++) {
            if(graph[i][j] != INF && cost[j] != INF) {
                if(graph[i][j] + cost[j] < cost[i]) {
                    cost[i] = graph[i][j] + cost[j];
                    parent[i] = j;
                }
            }
        }
    }

    cout << "Backward Minimum Cost: " << cost[0] << endl;

    cout << "Path: ";
    int i = 0;
    while(i != n-1) {
        cout << i+1 << " -> ";
        i = parent[i];
    }
    cout << n << endl;
}

int main() {
    int n = 10;
    
    int graph[MAX_N][MAX_N] = {
        {INF, INF, INF, INF,   8,   7, INF, INF, INF, INF}, 
        {INF,   3,   4,   5, INF, INF, INF, INF, INF, INF}, 
        {INF, INF, INF, INF, INF,   1,   6, INF, INF, INF}, 
        {INF, INF, INF, INF,   9,   4,   6, INF, INF, INF}, 
        {INF, INF, INF, INF, INF, INF, INF,   2,   5, INF}, 
        {INF, INF, INF, INF, INF, INF, INF,   9, INF, INF}, 
        {INF, INF, INF, INF, INF, INF, INF, INF,   7, INF}, 
        {INF, INF, INF, INF, INF, INF, INF, INF, INF,   4}, 
        {INF, INF, INF, INF, INF, INF, INF, INF, INF,   8}, 
        {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF}   
    };

    cout << "Backward Approach:\n";
    multistageBackward(n, graph);

    return 0;
}