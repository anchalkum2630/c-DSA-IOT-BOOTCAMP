#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,t,i;
    cout<<"ENTER THE NUMBER TO CHECK WHETHER IT IS A FABONACCI NUMBER OR NOT"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        t=a+b;
        a=b;
        b=t;
        if(t==n)
        {
            cout<<n<<" IS A TERM OF FABONACCI SERIES";
        }
    }
    return 0;
}
