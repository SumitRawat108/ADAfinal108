#include <iostream>
using namespace std;

int findMissing(int arr[], int start, int end, int first){
    if(start > end){
        return -1;
    }
    if(arr[start] != first + start){
        return first + start;
    }
    return findMissing(arr, start + 1, end, first);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 7, 8};
    int n = 7;

    int missing = findMissing(arr, 0, n - 1, arr[0]);

    cout << "Missing number is: " << missing << endl;

    return 0;
}
