#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
public:
    void input()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
            cout<<endl;
        }
    }
    void display()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix c;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return c;
    }
};
int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter Matrix Element(3 x 3) : "<<endl;
    m1.input();
    cout<<"\nEnter Matrix Element(3 x 3) : "<<endl;
    m2.input();
    cout<<"First Matrix : "<<endl;
    m1.display();
    cout<<"Second Matrix : "<<endl;
    m2.display();
    m3=m1+m2;
    cout<<"Addition of Matrix :"<<endl;
    m3.display();
    return 0;


}
