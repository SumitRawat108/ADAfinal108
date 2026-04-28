#include<iostream>
#include<algorithm>
using namespace std;

void knapsack(int n, int m, int w[], int p[]) {

    int K[100][100]; 
    for (int i = 0; i <= n; i++) {
        for (int wt = 0; wt <= m; wt++) {

            if (i == 0 || wt == 0) {
                K[i][wt] = 0;
            }
            else if (w[i] <= wt) {
                K[i][wt] = max(p[i] + K[i-1][wt - w[i]], K[i-1][wt]);
            }
            else {
                K[i][wt] = K[i-1][wt];
            }
        }
    }

    cout << "Maximum Profit: " << K[n][m] << endl;

    int i = n, j = m;
    cout << "Included objects: ";

    while (i > 0 && j > 0) {
        if (K[i][j] != K[i-1][j]) {
            cout << i << " ";
            j = j - w[i];
        }
        i--;
    }
    cout << endl;
}

int main() {

    int n = 4;  
    int m = 10;  

    int profits[] = {20,15,30,35};
    int weights[] = {5,3,4,5};

    knapsack(n, m, weights, profits);

    return 0;
}