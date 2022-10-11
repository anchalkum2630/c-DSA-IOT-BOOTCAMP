#include<iostream>
using namespace std;
class fraction
{
    long num,deno;
public:
    fraction()
    {
        num=0;
        deno=0;
    }
    friend void operator>>(istream &in,fraction &f)
    {
        cout<<"\nNumerator   :  ";
        in>>f.num;
        cout<<"\nDenominator :  ";
        in>>f.deno;
    }
    friend void operator<<(ostream &out,fraction &f)
    {
        out<<f.num<<"/"<<f.deno;
    }
    fraction operator++()
    {
        ++num;
        ++deno;
        return (*this);
    }
    fraction operator++(int s)
    {
        fraction temp=(*this);
        num++;
        deno++;
        return temp;
    }

};
int main()
{
    fraction f1,f2;
    cout<<"\nf1    :  ";
    cout<<f1;
    cout<<"\nf2    :  ";
    cout<<f2;
    cout<<"\n\nEnter first fraction value\n";
    cin>>f1;
    cout<<"\nf1++   :";
    f1++;
    cout<<f1;
    cout<<"\n++f1   :";
    ++f1;
    cout<<f1;
    cout<<"\n\nEnter second fraction value\n";
    cin>>f2;
    cout<<"\nf2 = ++f1\n";
    f2=++f1;
    cout<<"f1   :  ";
    cout<<f1;
    cout<<"\nf2   :  ";
    cout<<f2;
    f2=f1++;
    cout<<"\n\nf2 = f1++";
    cout<<"\nf1   :  ";
    cout<<f1;
    cout<<"\nf2   :  ";
    cout<<f2;
    return 0;

}
