#include<iostream>
using namespace std;
class time
{
private:
    int hr,min,sec;
public:
    void SetData(int x,int y,int z)
    {
        hr=x;
        min=y;
        sec=z;
    }
    void GetData()
    {
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec";
    }
};
int main()
{
    time t1;
    t1.SetData(4,56,33);
    t1.GetData();
    return 0;
}
