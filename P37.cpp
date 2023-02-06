#include<iostream>
using namespace std;
class vehicle
{
    protected:
        int mileage,price;
    public:
        void getdata()
        {
            cout<<"Enter mileage: ";
            cin>> mileage;
            cout<<"Enter price: ";
            cin>>price;
        }
    void putdata()
    {
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
class car: public vehicle
{
    protected:
        int oc,warr,cap;
        string type;
    public:
        void input()
        {
            getdata();
            cout<<"Enter ownership cost: ";
            cin>>oc;
            cout<<"Enter warranty: ";
            cin>>warr;
            cout<<"Enter seating capacity: ";
            cin>>cap;
            cin.ignore();
            cout<<"Enter fuel type: ";
            getline(cin, type);
        } 
        void display()
        {
            putdata();
            cout<<"Ownership cost: "<<oc<<endl;
            cout<<"Warranty: "<<warr<<" years"<<endl;
            cout<<"Seating capacity: "<<cap<<endl;
            cout<<"Fuel type is: "<<type<<endl;
        }
};    
class audi: public car
{
    protected:
        string modeltype;
    public:
        void setdata()
        {
            cout<<"Enter details of Audi Car:-----------------------------\n";
            input();
            cout<<"Enter modeltype: ";
            getline(cin,modeltype);
        }
        void putdata()
        {
            cout<<"---------AUDI SPEC-------\n";
            display();
            cout<<"Modeltype: "<<modeltype<<endl;
        }
};
class ford: public car
{
    protected:
        string modeltype;
    public:
        void setdata()
        {
            cout<<"Enter details of Ford Car:-----------------------------\n";
            input();
            cout<<"Enter modeltype: ";
            getline(cin,modeltype);
        }
        void putdata()
        {
            cout<<"--------FORD SPEC-------\n";
            display();
            cout<<"Modeltype: "<<modeltype<<endl;
        }
};
class bike: public vehicle
{
    protected:
        int cy,gear,size;
        string cool,wheel;
    public:
        void input()
        {
            getdata();
            cout<<"Enter number of cylinders: ";
            cin>>cy;
            cout<<"Enter number of gears: ";
            cin>>gear;
            cout<<"Enter fuel tank size: ";
            cin>>size;
            cin.ignore();
            cout<<"Enter cooling type(air,liquid or oil): ";
            getline(cin,cool);
            cout<<"Enter type of wheels(alloys or spokes): ";
            getline(cin,wheel); 
        }
        void display()
        {
            putdata();
            cout<<"Number of cylinders: "<<cy<<endl;
            cout<<"Number of gears: "<<gear<<endl;
            cout<<"Fueltank size: "<<size<<endl;
            cout<<"Cooling type: "<<cool<<endl;
            cout<<"Wheels: "<<wheel<<endl;
        }
};
class bajaj: public bike
{
    protected:
        string maketype;
    public:
        void setdata()
        {
            cout<<"Enter details of Bajaj Bike:-----------------------------\n";
            input();
            cout<<"Enter make type of bajaj bike:";
            getline(cin,maketype);
        }
        void putdata()
        {
            cout<<"---------BAJAJ SPEC-----\n";
            display();
            cout<<"Maketype: "<<maketype<<endl;
        }
};
class TVS: public bike
{
    protected:
        string maketype;
    public:
        void setdata()
        {
            cout<<"Enter details of TVS Bike:-----------------------------\n";
            input();
            cout<<"Enter make type of TVS bike:";
            getline(cin,maketype);
        }
        void putdata()
        {
            cout<<"--------TVS SPEC-----\n";
            display();
            cout<<"Maketype: "<<maketype<<endl;
        }
};
int main()
{
    audi aa;
    ford bb;
    bajaj cc;
    TVS dd;
    aa.setdata();
    aa.putdata();
    bb.setdata();
    bb.putdata();
    cc.setdata();
    cc.putdata();
    dd.setdata();
    dd.putdata();
    return 0;
}