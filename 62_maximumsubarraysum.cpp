#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
             int sum = 0;
           for(int k=i; k<=j; k++){
                sum+= a[k];
            }
            mx = max(mx,sum);
        }
    }
    cout<<mx<<endl;
    return 0;
}