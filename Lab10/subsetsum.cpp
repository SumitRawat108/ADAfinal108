#include <iostream>
using namespace std;

#define MAX 20

int subset[MAX];

void subsetSum(int arr[], int n, int target, int sum, int index, int k) {
    // If sum matches target → print subset
    if (sum == target) {
        cout << "{ ";
        for (int i = 0; i < k; i++)
            cout << subset[i] << " ";
        cout << "}" << endl;
        return;
    }

    if (sum > target || index == n)
        return;

    subset[k] = arr[index];
    subsetSum(arr, n, target, sum + arr[index], index + 1, k + 1);

    subsetSum(arr, n, target, sum, index + 1, k);
}

int main() {
    int arr[] = {1 ,2, 4, 5, 6, 8};
    int n = 6;
    int target = 9;

    cout << "Subsets with sum " << target << ":\n";
    subsetSum(arr, n, target, 0, 0, 0);

    return 0;
}