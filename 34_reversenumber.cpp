#include<iostream>
    using namespace std;
 int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int reverse=0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    cout<<"Reverse of the Number is:"<<endl;
    cout<<reverse<<endl;

    return 0;
}