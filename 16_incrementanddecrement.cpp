#include<iostream>
    using namespace std;
 int main()
{
    int i=1;
    i = i++ + ++i;
    cout<<i<<endl;
//------------------------------------->>>>
    int a=1, b=2, k;
    k = a + b + a++ + b++ + ++a + ++b;
    cout<<k<<endl;
//------------------------------------->>>>
    int p=0;
    p = p++ - --p + ++p - p--;
    cout<<p<<endl;
//------------------------------------->>>>
    int x=1, y=2, z=3;
    int w = x-- - y-- - z--;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    cout<<w<<endl;
//------------------------------------->>>>
    int c=10, d=20, e;
    e = c-- + --d - ++d + --c - d-- + ++c - d++;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    return 0;
}