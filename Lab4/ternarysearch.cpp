#include <iostream>
using namespace std;

int ternarySearch(int arr[], int key, int low, int high) {
    if (low > high)
        return -1;

    int mid1 = low + (high - low) / 3;
    int mid2 = high - (high - low) / 3;

    if (arr[mid1] == key)
        return mid1;

    if (arr[mid2] == key)
        return mid2;

    if (key < arr[mid1])
        return ternarySearch(arr, key, low, mid1 - 1);
    else if (key > arr[mid2])
        return ternarySearch(arr, key, mid2 + 1, high);
    else
        return ternarySearch(arr, key, mid1 + 1, mid2 - 1);
}

int main() {
    int n = 12;
    int arr[12] = {1,5,10,11,12,20,21,33,38,41,43,47};

    int result = ternarySearch(arr, 20, 0, n - 1);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}