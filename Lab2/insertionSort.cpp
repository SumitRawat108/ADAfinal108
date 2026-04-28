#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    const int RUNS = 1000;
    long long bestTime = 0, worstTime = 0;

    for (int r = 0; r < RUNS; r++) {  // Best case
        int* arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }

        auto start = high_resolution_clock::now();
        insertionSort(arr, n);
        auto stop = high_resolution_clock::now();

        bestTime += duration_cast<microseconds>(stop - start).count();
        delete[] arr;
    }

    for (int r = 0; r < RUNS; r++) {  // Worst case
        int* arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = n - i;
        }

        auto start = high_resolution_clock::now();
        insertionSort(arr, n);
        auto stop = high_resolution_clock::now();

        worstTime += duration_cast<microseconds>(stop - start).count();
        delete[] arr;
    }

    cout << "Best case average time: "
         << (double)bestTime / RUNS << " microseconds\n";

    cout << "Worst case average time: "
         << (double)worstTime / RUNS << " microseconds\n";

    return 0;
}
