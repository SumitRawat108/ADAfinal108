#include<iostream>
#include<climits>
using namespace std;

int MCM(int n, int p[]){
    int m[10][10];
    for(int i=1;i<n;i++) 
        m[i][i]=0;
    for(int L=2;L<n;L++){
        for(int i=1;i<n-L+1;i++){
            int j=i+L-1;
            m[i][j]=INT_MAX;
            for(int k=i;k<j;k++){
                int q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                m[i][j]=min(m[i][j],q);
            }
        }
    }
    return m[1][n-1];
}
int main(){
    int n=5,p[]={2,4,2,5,6,2};
    cout<< "Minimum cost : "<<MCM(n,p);
    return 0;
}
