#include <iostream>
using namespace std;

int hornerRule(int a[], int n, int x, int i){
    if (i == n - 1){
         return a[i];
    }
    else{
    return a[i] + x*hornerRule(a, n, x, i + 1);
    }
}

int main(){
    int a[] = {1, 2, 3, 4, 5};   
    int x=2,n = 5;

    int result = hornerRule(a, n, x, 0);

    cout << "Polynomial value is: " << result << endl;

    return 0;
}
