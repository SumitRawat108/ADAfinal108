#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(pivot, arr[j]);
    return j;
}

int kthSmallest(int arr[], int low, int high, int k) {
    int p = partition(arr, low, high);

    if (p == k - 1)
        return arr[p];
    else if (p > k - 1)
        return kthSmallest(arr, low, p - 1, k);
    else
        return kthSmallest(arr, p + 1, high, k);
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = 6;
    int k = 4;

    int result = kthSmallest(arr, 0, n - 1, k);
    cout << "Kth smallest element: " << result;

    return 0;
}
