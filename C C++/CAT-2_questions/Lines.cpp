#include<iostream>
#include<cmath>
#include<map>
#include<list>
using namespace std;

class point
{
    int x,y;
    void get()
    {
        cout<<"Enter x and y coordinate:";
        cin>>x>>y;
    }
};

class line
{
    int length;
    void distance(int x1,int x2,int y1, int y2)
    {
        length=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    }
};

int main()
{
    int n;
    cout<<"Enter the number of lines:";
    cin>>n;
    point p[2*n];
    

}