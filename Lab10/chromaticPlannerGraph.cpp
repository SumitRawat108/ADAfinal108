#include <iostream>
using namespace std;

#define MAX 10

int n = 4;
int m = 3;
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
        x[k] = (x[k] + 1) % (m + 1);

        if (x[k] == 0)
            return;

        int j;
        for (j = 0; j < n; j++) {
            if (graph[k][j] == 1 && x[k] == x[j])
                break;
        }

        if (j == n)
            return;
    }
}

void mColoring(int k) {
    if (found) return;  

    while (true) {
        NextValue(k);

        if (x[k] == 0)
            return;

        if (k == n - 1) {
            cout << "First Solution: ";
            for (int i = 0; i < n; i++)
                cout << x[i] << " ";
            cout << endl;

            found = true;
            return;
        }
        else {
            mColoring(k + 1);
        }
    }
}

int main() {
    for (int i = 0; i < n; i++)
        x[i] = 0;

    mColoring(0);

    if (!found)
        cout << "No solution exists\n";

    return 0;
}