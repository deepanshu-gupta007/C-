#include<iostream>
using namespace std;
class book
{
    int id, price;
    string title, author, publisher;
    public:
        book(int i, int p, string t, string a, string pn)
        {
            id=i;
            price=p;
            title=t;
            author=a;
            publisher=pn;
        }
        void show()
        {
            cout<<"--------------------------------------\n";
            cout<<"ID: "<<id<<"\n";
            cout<<"Title: "<<title<<"\n";
            cout<<"Author Name: "<<author<<"\n";
            cout<<"Publisher Name: "<<publisher<<"\n";
            cout<<"Price: "<<price<<"\n";
            cout<<"--------------------------------------\n";
        }
        book(){}
};
int main () 
{
    int id, price, i, n;
    char title[50], author[50], publisher[50]; 
    cout<<"Enter number of entries: ";
    cin>>n;
    book b[n];
    for(i=0; i<n; i++)
    {
        cout<<"ID: ";
        cin>>id;
        getchar();
        cout<<"Title: ";
        cin.getline(title,50);
        cout<<"Author Name: ";
        cin.getline(author,50);
        cout<<"Publisher Name: ";
        cin.getline(publisher,50);
        cout<<"Price: ";
        cin>>price;
        b[i]={id, price, title, author, publisher};
        b[i].show();
    }
    return 0;
}