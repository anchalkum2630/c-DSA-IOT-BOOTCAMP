#include<iostream>
using namespace std;
int main()
{
    int m,n,d,s=0;
    cout<<"ENTER A NUMBER TO CHECK IT IS PALLINDROME OR NOT ";
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
        cout<<"d======"<<d;
        s=s*10+d;
        cout<<"s====="<<s<<endl;
        m=m/10;
    }
    if(s==n)
        cout<<"True ";
    else
        cout<<"False ";
    return 0;
}
