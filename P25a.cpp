#include<iostream>
using namespace std;
class Library
{
    int num, price, total_price, i_d, i_m, i_y, r_d, r_m, r_y;
    string name_book, name_author;
    public:
        void assign()
        {
            cout<<"Enter name of the book: ";
            getline(cin, name_book);
            cout<<"Enter name of the author: ";
            getline(cin, name_author);
            cout<<"Enter price of the book: ";
            cin>>price;
            cout<<"Enter number of books: ";
            cin>>num;
            total_price=price*num;
        }
        void issue_book()
        {
            cout<<"Enter issue date(DD/MM/YYYY):\n";
            cin>>i_d>>i_m>>i_y;
        }
        void return_book()
        {
            cout<<"Enter return date(DD/MM/YYYY):\n";
            cin>>r_d>>r_m>>r_y;
        }
        void display()
        {
            cout<<"------------------------------------";
            cout<<"\nName of the book = "<<name_book;
            cout<<"\nName of the author = "<<name_author;
            cout<<"\nPrice = "<<price;
            cout<<"\nNumber of books = "<<num;
            cout<<"\nTotal price = "<<total_price;
            cout<<"\nIssue date (DD/MM/YYYY) = "<<i_d<<"/"<<i_m<<"/"<<i_y;
            cout<<"\nReturn date (DD/MM/YYYY) = "<<r_d<<"/"<<r_m<<"/"<<r_y;
        }
};
int main()
{
    Library L;
    L.assign();
    L.issue_book();
    L.return_book();
    L.display();
    return 0;
}