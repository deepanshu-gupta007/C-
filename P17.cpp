#include<iostream>
using namespace std;
class book
{
    int id, price, num, tp;
    string name, author;
    public:
        void getdata()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter author: ";
            cin>>author;
            cout<<"Enter ID: ";
            cin>>id;
            cout<<"Enter price: ";
            cin>>price;
            cout<<"Enter quantity: ";
            cin>>num;
        }
        friend void price(book &b)
        {
            b.tp=b.num*b.price;
        }
        void display()
        {
            cout<<"----------------------------";
            cout<<"\nName: "<<name;
            cout<<"\nAuthor Name: "<<author;
            cout<<"\nID: "<<id;
            cout<<"\nTotal Price = "<<tp;
            cout<<"\n----------------------------\n";
        }
};
int main()
{
    int i;
    book b[5];
    for(i=0; i<5; i++)
    {
        b[i].getdata();
        price(b[i]);
        b[i].display();
    }
    return 0;
}