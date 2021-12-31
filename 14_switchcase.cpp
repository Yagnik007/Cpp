#include <iostream>
using namespace std;

int main() {
    char button;
    cout<<"Enter the value:"<<endl;
    cin>>button;
    
    switch (button){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"namaste"<<endl;
            break;
        case 'c':
            cout<<"salut"<<endl;
            break;
        case 'd':
            cout<<"Hola"<<endl;
            break;
        case 'e':
            cout<<"ciao"<<endl;
            break;
        
        default:
        cout<<"I am learning more"<<endl;
        break;
    }
    return 0;
}