#include <iostream>
using namespace std;

#define MAX 10

int n = 4;
int x[MAX];          
bool found = false;

int graph[MAX][MAX] = {
    {0,1,1,1},
    {1,0,1,0},
    {1,1,0,1},
    {1,0,1,0}
};

void NextValue(int k) {
    while (true) {
        x[k] = (x[k] + 1) % n;

        if (x[k] == 0)
            return;

        if (graph[x[k-1]][x[k]] == 1) {

            int j;
            for (j = 0; j < k; j++) {
                if (x[j] == x[k])
                    break;
            }

            if (j == k) {
                if (k < n - 1 || (k == n - 1 && graph[x[k]][x[0]] == 1))
                    return;
            }
        }
    }
}

void Hamiltonian(int k) {
    if (found) return;

    while (true) {
        NextValue(k);

        if (x[k] == 0)
            return;

        if (k == n - 1) {
            cout << "Hamiltonian Cycle: ";
            for (int i = 0; i < n; i++)
                cout << x[i] << " ";
            cout << x[0] << endl;

            found = true;
            return;
        }
        else {
            Hamiltonian(k + 1);
        }
    }
}

int main() {
    for (int i = 0; i < n; i++)
        x[i] = 0;

    x[0] = 0;   // start from vertex 0

    Hamiltonian(1);

    if (!found)
        cout << "No Hamiltonian Cycle exists\n";

    return 0;
}