#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p;//address
    p = &a;//address store
    cout<<p<<endl;//print address of a
    cout<<&p;//print address of p
    return 0;
}