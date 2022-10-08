#include<iostream>
using namespace std;
class Factorial
{
private:
    int num,fact=1;
public:
    void SetData(int x)
    {
        num=x;
    }
    void calculatefactorial();
    void GetData()
    {
        cout<<"FACTORIAL = "<<fact;
    }
};
void Factorial::calculatefactorial()
    {
        int i;
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
    }
int main()
{
    Factorial f1;
    f1.SetData(5);
    f1.calculatefactorial();
    f1.GetData();
    return 0;
}
