#include<iostream>
using namespace std;
class StaticCount
{
private:
    static int k;
public:
    void display()
    {
        int d;
        d=k++;
        cout<<"k = "<<d<<endl;
    }

};
int StaticCount::k;
int main()
{
    StaticCount s1,s2,s3;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
