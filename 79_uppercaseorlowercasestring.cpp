#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{   
    //lower case to upper case
    string str;
    cin>>str;

    for(int i=0; i<str.size(); i++){
        if(str[i]>= 'a' && str[i]<='z')
        str[i]-= 32;
    }
    cout<<str<<endl;

    //upper case to lower case
    for(int i=0; i<str.size(); i++){
        if(str[i]>= 'A' && str[i]<='Z')
        str[i]+= 32;
    }
    cout<<str<<endl;

    //direct function to uppercase
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    //direct function  to lower
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;
    return 0;
}