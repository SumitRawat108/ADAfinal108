#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

struct Edge {
    int u, v, w;
};

int find(int parent[], int i) {
    if (parent[i] == i)
        return i;
    return find(parent, parent[i]);
}

void unionSet(int parent[], int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

bool compare(Edge a, Edge b) {
    return a.w < b.w;
}

void kruskal(int V, Edge edges[], int E) {
    sort(edges, edges + E, compare);

    int parent[MAX];
    for (int i = 0; i < V; i++)
        parent[i] = i;

    cout << "Edges in MST:\n";

    for (int i = 0; i < E; i++) {
        int u = find(parent, edges[i].u);
        int v = find(parent, edges[i].v);

        if (u != v) {
            cout << edges[i].u << " - " << edges[i].v << " = " << edges[i].w << endl;

            unionSet(parent, u, v);
        }
    }
}

int main() {
    int V = 4;  
    int E = 5;  

    Edge edges[MAX] = {
        {0,1,10},
        {0,2,6},
        {0,3,5},
        {1,3,15},
        {2,3,4}
    };

    kruskal(V, edges, E);
    return 0;
}