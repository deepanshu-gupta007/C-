#include<iostream>
using namespace std;
class PersonData
{
    protected:
        string fn, ln, add, city, state;
        int zip;
        long long phno;
    public:
        void accessor()
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
        }
        void mutator()
        {
            cout<<"First name: "<<fn<<endl;
            cout<<"Last name: "<<ln<<endl;
            cout<<"Address: "<<add<<endl;
            cout<<"City: "<<city<<endl;
            cout<<"State: "<<state<<endl;
            cout<<"Zip: "<<zip<<endl;
            cout<<"Phone Number: "<<phno<<endl;
        }
};
class CustomerData: public PersonData
{
    protected:
        int customerid;
        bool mailinglist;
    public:
        void inputCustomerData()
        {
            accessor();
            cin.ignore();
            cout<<"Enter Customer ID: ";
            cin>>customerid;
            cin.ignore();
            cout<<"Do you want Mailing List Service (Enter 1 for Yes or 0 for No): ";
            cin>>mailinglist;
        }
        void displayCustomerData()
        {
            mutator();
            cout<<"Customer ID: "<<customerid<<endl;
            cout<<"Mailing List Service: ";
            if(mailinglist)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
};
int main()
{
    CustomerData obj;
    obj.inputCustomerData();
    obj.displayCustomerData();
    return 0;
}