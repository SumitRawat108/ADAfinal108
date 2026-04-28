#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int profit;
};

// Comparator for sorting by profit/weight ratio
bool cmp(Item a, Item b) {
    double r1 = (double)a.profit / a.weight;
    double r2 = (double)b.profit / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(Item items[], int n, int capacity) {
    // Sort items by ratio
    sort(items, items + n, cmp);

    double totalProfit = 0.0;

    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            // Take full item
            totalProfit += items[i].profit;
            capacity -= items[i].weight;
        } else {
            // Take fraction
            totalProfit += items[i].profit * ((double)capacity / items[i].weight);
            break;
        }
    }

    return totalProfit;
}

int main() {
    int n = 3;
    Item items[3] = {
        {10, 60},
        {20, 100},
        {30, 120}
    };

    int capacity = 50;

    double maxProfit = fractionalKnapsack(items, n, capacity);

    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}