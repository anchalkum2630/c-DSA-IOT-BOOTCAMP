#include<iostream>
using namespace std;
class Counter
{
private:
    static int c;
public:
    Counter()
    {
        c++;
    }
    void showCounter()
    {
        cout<<"NUMBER OF TIMES COUNTER CALLED = "<<c;
    }
};
int Counter::c;
int main()
{
    Counter c1,c2,c3,c4;
    c4.showCounter();
    return 0;

}
