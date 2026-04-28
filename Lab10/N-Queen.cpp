#include <iostream>
using namespace std;

#define MAX 15

int x[MAX];
bool found = false;

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (x[i] == col || abs(x[i] - col) == abs(i - row))
            return false;
    }
    return true;
}

void solve(int row, int n) {
    if (found) return;  

    if (row == n) {
        found = true;

        cout << "First Solution:\n";

        cout << "First Queen -> Row: 1, Column: " << x[0] + 1 << endl;

        cout << "Columns: ";
        for (int i = 0; i < n; i++) {
            cout << x[i] + 1 << " ";
        }
        cout << endl;

        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col)) {
            x[row] = col;
            solve(row + 1, n);
        }
    }
}

int main() {
    int n = 5;

    solve(0, n);

    if (!found)
        cout << "No solution exists\n";

    return 0;
}