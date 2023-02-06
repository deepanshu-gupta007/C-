#include<iostream>
using namespace std;
int x=1;
int main()
{
    int x=10;
    cout<<"Global value = "<<::x;  //scope resolution operater
    cout<<"\nLocal value = "<<x;
    return 0;
}