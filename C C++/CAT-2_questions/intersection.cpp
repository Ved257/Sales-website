#include<iostream>
using namespace std;

class Line
{
    public:
    int c, m;
    void Get_Data()
    {
        cout<<"Enter the Y interscept and the slope of the line ";
        cin>>c>>m;
    }
};

class Calculate
{
    public:
    int Intersection(class Line L1,class Line L2)
    {
        if(L1.m!=L2.m)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

};

int main()
{
    int x;
    Line l1,l2;
    l1.Get_Data();
    l2.Get_Data();
    Calculate C;
    x=C.Intersection(l1,l2);
    if(x==1)
    {
        cout<<"The lines can intersect";
    }
    else
    {
        cout<<"The lines cannot intersect";
    }
}