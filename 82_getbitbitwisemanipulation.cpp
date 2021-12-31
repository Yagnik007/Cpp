#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int main(){
    cout<<getBit(5,2)<<endl;
    return 0;
}

// int main()
// {
//     int n, i;
//     cin>>n>>i;

//     int a = 1<<i;
//     if(n&a==0){
//         cout<<"bit at that position is zero"<<endl;
//     }else{
//         cout<<"bit at that postion is one"<<endl;
//     }
//     return 0;
// }