#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
public:
    void setData()
    {
        int i,j;
        for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
            {
                cin>>a[i][j];
            }
            cout<<endl;
        }
    }
    void Display()
    {
        int i,j;
        for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
  void operator-()
    {
        int i,j;
        for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
            {
               a[i][j]=-a[i][j];
            }
            cout<<endl;
        }
    }
};
int main()
{
    Matrix m1,m2;
    cout<<"Enter Matrix Element(3 x 3) :"<<endl;
    m1.setData();
    cout<<"Matrix is :"<<endl;
    m1.Display();
    -m1;
    cout<<"Matrix is :"<<endl;
    m1.Display();
    return 0;
}
