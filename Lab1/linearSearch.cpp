#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000000;
    }

    int key = -1;

    const int RUNS = 1000;
    int index = -1;

    auto start = high_resolution_clock::now();

    for (int i = 0; i < RUNS; i++) {
        index = linearSearch(arr, n, key);
    }

    auto stop = high_resolution_clock::now();

    auto totalTime = duration_cast<microseconds>(stop - start).count();
    double averageTime = (double)totalTime / RUNS;

    //cout << "Element found at index: " << index << endl;
    cout << "Total time for " << RUNS << " runs: "
         << totalTime << " microseconds" << endl;
    cout << "Average time per search: "
         << averageTime << " microseconds" << endl;

    delete[] arr;
    return 0;
}
