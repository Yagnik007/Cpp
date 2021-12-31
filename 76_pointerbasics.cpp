//PASS BY REFERENCE THROUGH POINTER
#include <iostream>
using namespace std;

void swap(int *a, int *b){
int  temp = *a;
*a=*b;
*b = temp;
}
int main()
{
    int a=2;
    int b=3;

    int*aptr = &a;
    int*bptr = &b;

    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int*aptr;
//     aptr = &a;
//     cout<<&a<<endl;
//     cout<<aptr<<endl;
//     cout<<*aptr<<endl;
//     *aptr = 20;
//     cout<<a<<endl;
//     aptr++;
//     cout<<aptr<<endl;
//     return 0


// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[] = {1,2,3,4};
//     int*aptr; 
//     aptr = &a[0];
//     int*bptr;
//     bptr = &a[1];
//     cout<<aptr<<endl;
//     cout<<bptr<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10,20,30};
//     cout<<*arr<<endl;

//     int *ptr = arr;
//     for(int i=0; i<3; i++){     
//         cout<<*(arr+i)<<endl;   //cout<<*ptr<<endl;
//     }
//     return 0;
// }

//PASS BY VALUE WILL NOT CHANGE THE VALUE.
// #include <iostream>
// using namespace std;
// void increment(int a){
//     a++;
// }
// int main()
// {
//     int a=3;
//     increment(a);
//     cout<<a<<endl;
//     return 0;
// }

