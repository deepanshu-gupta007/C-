#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int num, s;
    cout<<"Enter a number: ";
    cin>>num;
    s=sum(num);
    cout<<"Sum = "<<s;
    return 0;
}
int sum(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+(n%10);
        n=n/10;
    }
    return s;
}