#include<iostream>
#include<cmath>
using namespace std;

#define MAX 100

struct Point {
    int x, y;
};

Point hull[MAX];
int h = 0;

int side(Point a, Point b, Point p) {
    return (p.y - a.y)*(b.x - a.x) - (b.y - a.y)*(p.x - a.x);
}

int dist(Point a, Point b, Point p) {
    return abs((p.y - a.y)*(b.x - a.x) - (b.y - a.y)*(p.x - a.x));
}

void add(Point p) {
    for(int i = 0; i < h; i++) {
        if(hull[i].x == p.x && hull[i].y == p.y)
            return;
    }
    hull[h++] = p;
}

void findHull(Point p[], int n, Point a, Point b, int s) {

    int index = -1;
    int maxd = 0;

    for(int i = 0; i < n; i++) {
        int d = dist(a, b, p[i]);

        if(side(a, b, p[i]) == s && d > maxd) {
            index = i;
            maxd = d;
        }
    }

    if(index == -1) {
        add(a);
        add(b);
        return;
    }

    findHull(p, n, p[index], a, -side(p[index], a, b));
    findHull(p, n, p[index], b, -side(p[index], b, a));
}

void quickHull(Point p[], int n) {
    if(n < 3) return;

    int min = 0, max = 0;

    for(int i = 1; i < n; i++) {
        if(p[i].x < p[min].x) min = i;
        if(p[i].x > p[max].x) max = i;
    }

    findHull(p, n, p[min], p[max], 1);
    findHull(p, n, p[min], p[max], -1);
}

int main() {
    int n = 6;
    Point p[MAX] = {
        {1,1}, {1,3}, {-1,2}, {3,1}, {0,0}, {-21,21}
    };

    quickHull(p, n);

    cout << "Convex Hull:\n";
    for(int i = 0; i < h; i++) {
        cout << "(" << hull[i].x << "," << hull[i].y << ")\n";
    }
    return 0;
}