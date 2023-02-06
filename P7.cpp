#include<iostream>
using namespace std;
inline int sum(int a, int b)
{
    return a+b;
}
inline int diff(int a, int b)
{
    return a-b;
}
inline int mul(int a, int b)
{
    return a*b;
}
inline int divi(int a, int b)
{
    return a/b;
}
inline int mod(int a, int b)
{
    return a%b;
}
int main()
{
    int a, b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    cout<<"Sum = "<<sum(a, b);
    cout<<"\nDifference = "<<diff(a, b);
    cout<<"\nMultiplication = "<<mul(a, b);
    cout<<"\nDivision = "<<divi(a, b);
    cout<<"\nModulus = "<<mod(a, b);
    return 0;
}