#include<iostream>
using namespace std;

void pg(char a[],int k,int n){
    if(k==n){
        for(int i=0 ;i<=n; i++){
        cout<<a[i];
        }
        cout<<endl;
        return;
    }
    else{
        for(int i=k;i<=n;i++){
            swap(a[k],a[i]);
            pg(a,k+1,n);
            swap(a[k],a[i]);
        }
    }
}
int main(){
    char a[]={'A','B','C'};
    int n=2;
    cout<<"all possible cases :"<<endl;
    pg(a,0,n);

    return 0;
}