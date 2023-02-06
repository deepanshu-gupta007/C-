#include<iostream>
using namespace std;
int reverse(int);
int main()
{
    int num, rev;
    cout<<"Enter a number: ";
    cin>>num;
    rev=reverse(num);
    cout<<"Reverse number = "<<rev;
    return 0;
}
int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    return rev;
}