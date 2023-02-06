#include<iostream>
using namespace std;
class employee
{
    int taxincome;
    float tax;
    string pan, name;
    public:
        void inputinfo()
        {
            cout<<"Enter personal account number: ";
            cin>>pan;
            cout<<"Enter store name: ";
            cin>>name;
            cout<<"Enter annual taxable income: ";
            cin>>taxincome;
        }
        void taxcalc()
        {
            if (taxincome<=250000)
                tax=0;
            else if (taxincome>250000 && taxincome<=300000)
                tax=0.1*(taxincome-250000);
            else if (taxincome>300000 && taxincome<=400000)
                tax=5000+(0.2*(taxincome-300000));
            else if (taxincome>400000)
                tax=25000+(0.3*(taxincome-400000));
        }
        void displayinfo()
        {
            cout<<"--------------------------------------\n";
            cout<<"Personal Account Number: "<<pan<<"\n";
            cout<<"Store Name: "<<name<<"\n";
            cout<<"Annual Taxable Income: "<<taxincome<<"\n";
            cout<<"Tax: "<<tax<<"\n";
            cout<<"--------------------------------------\n";
        }
};
int main() 
{
    employee e[10];
    int x;
    for (x=0; x<10; x++)
    {
        e[x].inputinfo();
        e[x].taxcalc();
        e[x].displayinfo();
    }
    return 0;
}