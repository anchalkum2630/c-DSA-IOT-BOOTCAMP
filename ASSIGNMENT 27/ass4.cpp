#include<iostream>
using namespace std;
class Time
{
private:
    int hr,min,sec;
public:
    Time()
    {
        hr=min=sec=0;
    }
    friend int operator>>(istream &input,Time &t)
    {
        cout<<"Enter Hours   : ";
        input>>t.hr;
        cout<<"Enter Minutes : ";
        input>>t.min;
        cout<<"Enter Seconds : ";
        input>>t.sec;
        t.min=t.min+t.sec/60;
        t.sec=t.sec%60;
        t.hr=t.hr+t.min/60;
        t.min=t.min%60;
        if(t.hr>=25)
            return 1;
        else
            return 0;
    }
    friend int operator<<(ostream &output,Time &t)
    {
        output<<"Hours   : "<<t.hr<<endl;
        output<<"Minutes : "<<t.min<<endl;
        output<<"Seconds : "<<t.sec;
    }
    int operator==(Time t1)
    {
        int tot,tot1;
        tot=hr*3600+min*60+sec;
        tot1=t1.hr*3600+t1.min*60+t1.sec;
        if(tot==tot1)
          return 1;
        else
          return 0;
    }
    ~ Time(){}
};
int main()
{

    Time t,t1;
    cout<<"\nEnter First Time ";
    cout<<"\n--------------------\n";
    if(cin>>t)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"\nFirst Time\n ";
    cout<<t;
     cout<<"\n\nEnter Second Time ";
    cout<<"\n--------------------\n";
    if(cin>>t1)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"\nSecond Time\n ";
    cout<<t1;
    if(t==t1)
       cout<<"\n\n\nTimes are same ";
    else
        cout<<"\n\n\nTimes are not same";
    return 0;

}
