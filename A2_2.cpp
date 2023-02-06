#include<iostream>
using namespace std;
class FriendDemo
{
    string str;
    public:
        void setstr(string s)
        {
            str=s;
        }
        friend class VowelCheck;
};
class VowelCheck
{
    int i, j=0, c=0, max=c;
    char cpy[100];
    string maxstr;
    public:
        void maxVowel(FriendDemo &f)
        {
            for(i=0; f.str[i]!='\0'; i++)
            {
                if(f.str[i]=='A' || f.str[i]=='E' || f.str[i]=='I' || f.str[i]=='O' || f.str[i]=='U')
                    c++;
                if(f.str[i]==' ')
                {
                    if(max<c)
                    {
                        max=c;
                        maxstr=cpy;
                    }
                    c=0, j=0;
                }
                else
                {
                    cpy[j++]=f.str[i];
                    cpy[j]='\0';
                }
            }
            cout<<"The word with maximum number of vowels: "<<maxstr;
        }
};
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin, str);
    FriendDemo f;
    f.setstr(str);
    VowelCheck v;
    v.maxVowel(f);
    return 0;
}