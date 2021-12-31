#include <iostream>
using namespace std;

unsigned int countsetbit(int n){
    unsigned int count=0;
    while(n){
        n = n&(n-1);
        count++;
    }
    return count;

}

int main()
{
   cout<<countsetbit(15)<<endl;
    return 0;
}