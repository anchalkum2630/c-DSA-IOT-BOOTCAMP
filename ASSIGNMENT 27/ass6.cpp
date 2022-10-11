#include<iostream>
#include<string.h>
using namespace std;
class Cstring
{
private:
    char str[20];
public:
    void input()
    {
        cout<<"Enter String : "<<endl;
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    Cstring operator+(Cstring c)
    {
        Cstring c1;
        strcpy(c1.str,str);
        strcat(c1.str,c.str);
        return c1;
    }
    int operator==(Cstring &t);
};
int Cstring::operator==(Cstring &t)
{
   int v;
   v=strcmp(str,t.str);
}
int main()
{
    Cstring s,s1,s2;
    int result=0;
    s.input();
    s1.input();
    cout<<"\n-----------------------------\n";
    cout<<"First String :  ";
    s.display();
    cout<<"\nSecond String :  ";
    s1.display();
    s2=s+s1;
    cout<<"\n\nConcatenated String :  ";
    s2.display();
    cout<<"\n\n\Check It Is Equal or Not\n";
    result=s==s1;
    if(result==0)
        cout<<"Strings are Same"<<endl;
    else
        cout<<"Strings are not Same"<<endl;
    return 0;

}
