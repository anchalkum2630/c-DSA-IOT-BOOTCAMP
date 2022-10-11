#include<iostream>
using namespace std;
class mystring
{
    char str[100];
public:
    void input()
    {
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    void operator!()
    {
        int i;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                str[i]=str[i]+32;
            else
                str[i]=str[i]-32;
        }
        cout<<"Changed string :  "<<str;
    }
};
int main()
{
    mystring m1,m2,m3;
    cout<<"Enter String  :  ";
    m1.input();
    !m1;
    return 0;
}
