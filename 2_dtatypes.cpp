#include<iostream>
using namespace std;

int main(){

    int  a; //declaration
    a=12; //initialisation

    cout<<"size of int is  "<<sizeof(a)<<endl;

    float  b;
    cout<<"size of float is "<<sizeof(b)<<endl;

    char  c;
    cout<<"size of character is "<<sizeof(c)<<endl;

    bool  d;
    cout<<"size of boolean is "<<sizeof(d)<<endl;

    short int  si;
    long int li;    
    cout<<"size of shortint is "<<sizeof(si)<<endl;
    cout<<"size of longint is "<<sizeof(li)<<endl;
    return 0;

}