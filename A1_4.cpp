#include<iostream>
using namespace std;
int main()
{
    int num, min;
    cout<<"Enter a number: ";
    cin>>num;
    min=num%10;
    num/=10;
    while (num!=0)
    {
        if (min>(num%10))
            min=num%10;
        num/=10;
    }
    cout<<"Smallest digit: "<<min;
    return 0;
}