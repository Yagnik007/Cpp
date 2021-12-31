#include<iostream>
    using namespace std;
 int main()
{
    int savings;
    cout<<"Enter the savings:\n";
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Neha";
        }
        else{
            cout<<"Shopping with Neha";
        }
    }
    else if(savings>2000){
        cout<<"Rashmi\n";
    }
    else{
        cout<<"Friends";
    }

    return 0;
}