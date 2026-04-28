#include<iostream>
using namespace std;

void ToH(int n ,int f ,int u, int t){
    if(n==1){
        cout<<"move disk from "<<f<<" to "<<t<<endl;
    }
    else{
        ToH(n-1,f,t,u);
        cout<<"move disk from "<<f<<" to "<<t<<endl;
        ToH(n-1,u,f,t);
    }
}
int main(){
    int n =3;
    int f=1,u=2,t=3;
    ToH(n,f,u,t);
    return 0;
}