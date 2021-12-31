#include<iostream>
    using namespace std;
 int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    if(n>10){
        cout<<"More than 10"<<endl;
    }
    else if(n<10){
        cout<<"less than 10"<<endl;
    }
    else{
        cout<<"Equal to 10"<<endl;
    }
    return 0;
}