#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        cin>>a[i][j];
    }

    //transpose of a matrix

    cout<<"Transpose matrix is:"<<endl;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[j][i]<<" ";
        }cout<<endl;
    }
    return 0;
}