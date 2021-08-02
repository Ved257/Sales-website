#include <iostream>
using namespace std;

class Weight
{
    public:
    int n,wt;
    void weight(int N, int WT)
    {
        n=N;
        wt=WT;
    }
};
class Overeight
{
    public:
    int n2,wt2;
    void overweight(int N2,int WT2)
    {
        n2=N2;
        wt2=WT2;
    }
};
class Underweight
{
    public:
    int n3,wt3;
    void underweight(int N3,int WT3)
    {
        n3=N3;
        wt3=WT3;
    }
};

class avg:public Weight,public Overeight,public Underweight
{
    public:
    static int average;
    static void calc(int n1,int n2,int n3)
    {
        average=
    }
};