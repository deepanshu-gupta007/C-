#include<iostream>
using namespace std;
class invoice
{
    string part_num, part_dis;
    int quantity;
    double price, amt;
    public: 
        invoice()
        {
            quantity=0;
            price=0;
        }
        void getdata()
        {
            cout<<"Enter Part Number: ";
            getline(cin, part_num);
            cout<<"Enter Part Discription: ";
            getline(cin, part_dis);
            cout<<"Enter Quantity: ";
            cin>>quantity;
            cout<<"Enter Price: ";
            cin>>price;
            if (quantity<0)
                quantity=0;
            if (price<0)
                price=0;
        }
        void get_invoice_amt()
        {
            amt=quantity*price;
        }
        void show()
        {
            cout<<"----------------------------------------";
            cout<<"\nPart Number = "<<part_num;
            cout<<"\nPart Discription = "<<part_dis;
            cout<<"\nQuantity = "<<quantity;
            cout<<"\nPrice per item = "<<price;
            cout<<"\nTotal amount = "<<amt;
        }
};
int main()
{
    invoice i;
    i.getdata();
    i.get_invoice_amt();
    i.show();
    return 0;
}