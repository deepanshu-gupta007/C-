#include<iostream>
using namespace std;
char armstrong(int);
int main()
{
    int num;
    char c;
    cout<<"Enter a number: ";
    cin>>num;
    c=armstrong(num);
    if (c=='Y')
        cout<<num<<" is an armstrong number";
    else
        cout<<num<<" is not an armstrong number";
    return 0;
}
char armstrong(int c)
{
    int sum=0, n=c;
    while(n!=0)
    {
        sum=sum+(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(sum==c)
        return 'Y';
    else
        return 'N';
}