#include <iostream> 
using namespace std; 

class Physics
{
    public:
    int p;
    void MarksP()
    {
        cout<<"Physics: ";
        cin>>p;
    }
};
class Chemistry
{
    public:
    int c;
    void MarksC()
    {
        cout<<"Chemistry: ";
        cin>>c;
    }
};
class Mathematics
{
    public:
    int m;
    void MarksM()
    {
        cout<<"Mathematics: ";
        cin>>m;
    }
};

class Marks:public Physics,public Chemistry,public Mathematics
{
    public:
    int marks;
    void calculate()
    {
        marks=p+c+m;
        cout<<marks;
    }
};

int main()
{
    Marks stud;
    stud.MarksP();
    stud.MarksC();
    stud.MarksM();
    stud.calculate();
}