#include<iostream>
using namespace std;

int power(int x, int n){
    int m=n,z=x,pow=1;
    while(m>0){
        while(m%2==0){
            m=m/2;
            z=z*z;
        }
        m=m-1;
        pow=pow*z;
    }
    return pow;
}
int main(){
    int x,n;
    cout<<" enter x and n :";
    cin>>x;
    cin>>n;
    cout<<x<<" raised to "<<n<<" is "<<power(x,n);
    return 0;
}