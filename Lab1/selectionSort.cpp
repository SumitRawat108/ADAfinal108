#include <iostream>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace chrono;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;

        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    srand(time(0));

    cout << "Array Generated\n";
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000000;

    auto start = high_resolution_clock::now();
    selectionSort(arr, n);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Time taken to sort " << n
         << " elements using Selection Sort: "
         << duration.count() << " milliseconds" << endl;

    return 0;
}
