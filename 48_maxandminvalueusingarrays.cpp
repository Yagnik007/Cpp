#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

     int array[n];

    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int max = array[0];
    //for maximum value
    for(int i=0; i<n; i++){
        if(max<array[i])
        max = array[i];
    }

    cout<<"the maximum number is "<<max<<endl;

    int min = array[0];
    //for minimum value
    for(int i=0; i<n; i++){
        if(min>array[i]){
            min = array[i];
        }
    }

    cout<<"the minimum number is "<<min<<endl;
    return 0;
}