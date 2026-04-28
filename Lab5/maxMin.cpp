#include <iostream>
using namespace std;

void MaxMin(int arr[], int low, int high, int &max, int &min) {
    if (low == high) {
        max = min = arr[low];
        return;
    }
    else if (high == low + 1) {
        if (arr[low] > arr[high]) {
            max = arr[low];
            min = arr[high];
        } else {
            max = arr[high];
            min = arr[low];
        }
        return;
    }
    else{
    int mid = (low + high) / 2;
    int max1, min1, max2, min2;

    MaxMin(arr, low, mid, max1, min1);
    MaxMin(arr, mid + 1, high, max2, min2);

    max = (max1 > max2) ? max1 : max2;
    min = (min1 < min2) ? min1 : min2;
    }
}

int main() {
    int arr[] = {5, 12, 8, 10, 20, 39, 2, 17, 11, 25};
    int n = 10;

    int max, min;
    MaxMin(arr, 0, n - 1, max, min);

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
