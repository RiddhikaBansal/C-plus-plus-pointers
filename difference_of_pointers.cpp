#include<iostream>
using namespace std;
int main()

{
    int A[]={3,7,8,9,6};
    int *p=A, *q=&A[4];

    cout<<p-q;

    return 0;
}