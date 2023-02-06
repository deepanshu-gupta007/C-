#include<iostream>
using namespace std;
int main()
{
    int num, n, s=0, p=1, res;
    cout<<"Enter a two digit number: ";
    cin>>num;
    if (num>9 && num<100)
    {
        n=num;
        while(n!=0)
        {
            s=s+(n%10);
            p=p*(n%10);
            n=n/10;
        }
        cout<<"Sum of dgits: "<<s;
        cout<<"\nProducrt of digits: "<<p;
        res=s+p;
        cout<<"\nSum of the sum of digits and product of digits: "<<res;
        if (num==res)
            cout<<"\nSpecial 2-digit number";
        else
            cout<<"\nNot a special 2-digit number";
    }
    else   
        cout<<"Entered number is not a 2-digit number";
    return 0;
}