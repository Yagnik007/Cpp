#include <iostream>
using namespace std;

int main() {
    float n1,n2;
    cout<<"Enter the Numbers"<<endl;
    cin>>n1>>n2;
    
    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;
    
    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
            
        default:
        cout<<"error"<<endl;
        break;
    }
    return 0;
}