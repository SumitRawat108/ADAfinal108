#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

#define INF 99999

void floydWarshall(int n, int graph[4][4]) {
    int A[4][4];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = graph[i][j];
        }
    }

    for (int k = 0; k < n; k++) {        // Warshall logic
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (A[i][k] != INF && A[k][j] != INF) {
                    A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
                }
            }
        }
    }

    cout << "Shortest distance matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == INF)
                cout << setw(5) << "INF";
            else
                cout << setw(5) << A[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    int graph[4][4] = {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}
    };

    floydWarshall(n, graph);

    return 0;
}