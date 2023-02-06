#include<iostream>
using namespace std;
class CustomerData
{
    protected:
        string fn, ln, add, city, state;
        int zip, customerid;
        long long phno;
    public:
        void getCustomerData()
        {
            cout<<"Enter first name: ";
            getline(cin, fn);
            cout<<"Enter last name: ";
            getline(cin, ln);
            cout<<"Enter address: ";
            getline(cin, add);
            cout<<"Enter city: ";
            getline(cin, city);
            cout<<"Enter state: ";
            getline(cin, state);
            cout<<"Enter zip: ";
            cin>>zip;
            cout<<"Enter phone number: ";
            cin>>phno;
            cout<<"Enter Customer ID: ";
            cin>>customerid;
        }
        void displayCustomerData()
        {
            cout<<"First name: "<<fn<<endl;
            cout<<"Last name: "<<ln<<endl;
            cout<<"Address: "<<add<<endl;
            cout<<"City: "<<city<<endl;
            cout<<"State: "<<state<<endl;
            cout<<"Zip: "<<zip<<endl;
            cout<<"Phone Number: "<<phno<<endl;
            cout<<"Customer ID: "<<customerid<<endl;
        }
};
class PreferredCustomer: public CustomerData
{
    protected:
        int purchasesAmount, discountLevel;
    public:
        void getData()
        {
            getCustomerData();
            cout<<"Enter total amount of purchase: ";
            cin>>purchasesAmount;
            if (purchasesAmount>=20000)
                discountLevel=10;
            else if (purchasesAmount>=15000)
                discountLevel=7;
            else if (purchasesAmount>=10000)
                discountLevel=6;
            else if (purchasesAmount>=5000)
                discountLevel=5;
            else discountLevel=0;
        }
        void showData()
        {
            displayCustomerData();
            cout<<"Purchase Amount: "<<purchasesAmount<<endl;
            cout<<"Discount Percentage: "<<discountLevel<<"%\n";
        }
};
int main()
{
    PreferredCustomer obj;
    obj.getData();
    obj.showData();
    return 0;
}