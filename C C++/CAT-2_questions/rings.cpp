#include<iostream>
using namespace std;

#define PI 3.14


class Ring
{
    public:
    float r,a;
    void Get_Radius()
    {
        cout<<"Enter the radius";
        cin>>r;

    }
    void Calc_Area()
    {
        a=r*r*PI;
    }
};

class Box
{
    public:
    float l,b,h,A;
    void Get_Dim()
    {
        cout<<"Enter length breadth and height";
        cin>>l>>b>>h;
    }
    void Calc_Top_Area()
    {
        if(l*b>b*h && l*b>l*h)
        {
            A=l*b;
        }
        else if(b*h>l*h && b*h>l*b)
        {
            A=b*h;
        }
        if(l*h>b*h && l*h>l*b)
        {
            A=l*h;
        }
    }
    int Add_Ring(class Ring R)
    {
        if(A>R.a)
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
    Ring R;
    Box B;
    R.Get_Radius();
    R.Calc_Area();
    B.Get_Dim();
    B.Calc_Top_Area();
    x=B.Add_Ring(R);

    if (x==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}