#include <iostream>
#include <chrono> 
#include<cstdlib> 
#include<random>
using namespace std;
using namespace chrono;

int bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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

    const int RUNS = 1000;
    int index = -1;

    auto start = high_resolution_clock::now();

    for (int i = 0; i < RUNS; i++) {
        index = bubbleSort(arr, n);
    }

    auto stop = high_resolution_clock::now();

    auto totalTime = duration_cast<microseconds>(stop - start).count();
    double averageTime = (double)totalTime / RUNS;

    cout << "Total time for " << RUNS << " runs: "
         << totalTime << " microseconds" << endl;
    cout << "Average time per search: "
         << averageTime << " microseconds" << endl;

    delete[] arr;
    return 0;
}