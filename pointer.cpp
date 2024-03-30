#include<iostream>
using namespace std;
int main()
    {
          int A[]={2,4,3,2,2,3};
          int *p=A;

          cout<<*p<<endl;
          cout<<*(p+2)<<endl;

          p++;
          cout<<p<<endl;

          p--;
          cout<<p<<endl;

          return 0;
    }
