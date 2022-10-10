#include<iostream>
using namespace std;
class Student
{
private:
    int mk;
    char gr;
public:
    Student(int x,char y)
    {
        mk=x;
        gr=y;
    }
    void showData()
    {
        cout<<"MARKS = "<<mk<<"  GRADE = "<<gr<<endl;
    }
};
int main()
{
    Student s1(99,'A'),s2(45,'C');
    cout<<"RECORD OF STUDENT 1 : ";
    s1.showData();
    cout<<"RECORD OF STUDENT 2 : ";
    s2.showData();
    return 0;
}
