#include <iostream>
using namespace std;

int main()
{
    double v, f = 0.575, t = 0;
    int b = 0;

    cout<<"Enter velocity :";
    cin>>v;

    while ((v *= f) >= 1)
         b++;

    cout << "Bounces = " << b ;
}
