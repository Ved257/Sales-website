#include<stdio.h>
#include<iostream>
 using namespace std;
 class rational
 {
         int numer;
         int denom;
         public:
         void getdata()
         { 
                 cin>>numer; 
                 cin>>denom;
         }
         void operator+(rational);
         void operator-(rational);
         void operator *(rational);
         void operator /(rational);
 };

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

 void rational ::operator+(rational c1)
 { 
         rational temp;
         temp.numer=(numer*c1.denom)+(c1.numer*denom);
         temp.denom=denom*c1.denom; 
         int hcf=gcd(temp.numer,temp.denom);
         temp.numer=temp.numer/hcf;
         temp.denom=temp.denom/hcf;
         cout<<temp.numer<<"/"<<temp.denom<<endl;
 }
 void rational ::operator -(rational c1)
 {
         rational temp;
         temp.numer=(numer*c1.denom)-(c1.numer*denom);
         temp.denom=denom*c1.denom; 
         int hcf=gcd(temp.numer,temp.denom);
         temp.numer=temp.numer/hcf;
         temp.denom=temp.denom/hcf;
         cout<<temp.numer<<"/"<<temp.denom<<endl;
 }
 void rational ::operator *(rational c1)
 {
         rational temp;
         temp.numer=numer*c1.numer;
         temp.denom=denom*c1.denom;
         int hcf=gcd(temp.numer,temp.denom);
         temp.numer=temp.numer/hcf;
         temp.denom=temp.denom/hcf;
         cout<<temp.numer<<"/"<<temp.denom<<endl;
 }
 void rational :: operator /(rational c1)
 {
         rational temp;
         temp.numer= numer*c1.denom;
         temp.denom=c1.numer*denom;
         int hcf=gcd(temp.numer,temp.denom);
         temp.numer=temp.numer/hcf;
         temp.denom=temp.denom/hcf;
         cout<<temp.numer<<"/"<<temp.denom<<endl;
 }
 int main()
 { 
        rational c1, c2;  
        c1.getdata(); 
        c2.getdata();  
        c1+c2; 
        c1-c2; 
        c1*c2; 
        c1/c2; 
        return 0;
 }