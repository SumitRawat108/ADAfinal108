#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

int binarySearch(int arr[], int key, int low, int high) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearch(arr, key, low, mid - 1);
    else
        return binarySearch(arr, key, mid + 1, high);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    srand(time(0));

    arr[0] = rand() % 10;
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] + (rand() % 10);
    }

    const int RUNS = 100000;
    int index;
    
    int bestKey = arr[n / 2];   

    auto bestStart = high_resolution_clock::now();
    for (int i = 0; i < RUNS; i++) {
        index = binarySearch(arr, bestKey, 0, n - 1);
    }
    auto bestStop = high_resolution_clock::now();

    auto bestTime =
        duration_cast<nanoseconds>(bestStop - bestStart).count();
    double bestAvg = (double)bestTime / RUNS;

    int worstKey = -1;   

    auto worstStart = high_resolution_clock::now();
    for (int i = 0; i < RUNS; i++) {
        index = binarySearch(arr, worstKey, 0, n - 1);
    }
    auto worstStop = high_resolution_clock::now();

    auto avgTime =
        duration_cast<nanoseconds>(worstStop - worstStart).count();
    double worstAvg = (double)avgTime / RUNS;

    cout << "Best case Time: " << bestAvg << " nanoseconds\n";
    cout << "Worst case Time: " << worstAvg << " nanoseconds\n";

    delete[] arr;
    return 0;
}
