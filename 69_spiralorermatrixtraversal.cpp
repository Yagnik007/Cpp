#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        cin>>a[i][j];
    }

//spiral order print 

int r_s = 0;
int c_s = 0;
int r_e = n-1;
int c_e = m-1;

while(r_s<= r_e && c_s<= c_e)
{
    // for r_s
    for(int col = c_s; col<=c_e; col++)
    cout<<a[r_s][col]<<" ";

    r_s++;

    //for c_e
    for(int row = r_s; row<= r_e; row++)
    cout<<a[row][c_e]<<" ";

    c_e--;

    //for r_e
    for(int col=c_e; col>= c_s; col--)
    cout<<a[r_e][col]<<" ";

    r_e--;

    //for c_s
    for(int row = r_e; row>=r_s; row--)
    cout<<a[row][c_s]<<" ";
    
    c_s++;
}
    return 0;
}