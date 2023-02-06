#include<iostream>
using namespace std;
class Patient
{
    int id, age;
    string name, disease, doctor, gender, address;
    public:
        Patient(){}
        Patient(string n, int x, int a, string dis, string d, string g, string add)
        {
            name=n;
            id=x;
            age=a;
            disease=dis;
            doctor=d;
            gender=g;
            address=add;
        }
        void display()
        {
            cout<<"Name = "<<name;
            cout<<"\nID = "<<id;
            cout<<"\nAge = "<<age;
            cout<<"\nDisease = "<<disease;
            cout<<"\nDoctor Name = "<<doctor;
            cout<<"\nGender = "<<gender;
            cout<<"\nAddress = "<<address;
            cout<<"\n---------------------------------\n";
        }
};
int main()
{
    Patient P[5];
    int i, x, a;
    string n, dis, d, g, add;
    for (i=0; i<5; i++)
    {
        cout<<"Enter ID = ";
        cin>>x;
        cout<<"Enter Age = ";
        cin>>a;
        cin.ignore();
        cout<<"Enter Name = ";
        getline(cin, n);
        cout<<"Enter Disease = ";
        getline(cin, dis);
        cout<<"Enter Doctor Name = ";
        getline(cin, d);
        cout<<"Enter Gender = ";
        cin>>g;
        cout<<"Enter Address = ";
        cin>>add;
        cout<<"---------------------------------\n";
        P[i]={n, x, a, dis, d, g, add};
    }
    for(i=0; i<5; i++)
        P[i].display();
    return 0;
}