#include <iostream>
#include <conio.h>

using namespace std;
 class Student
 {
     public:
     int m1,m2,m3,percentage;

     Student(int M1,int M2,int M3)
     {
         m1=M1;
         m2=M2;
         m3=M3;
     }

      int average(int a ,int b,int c)
      {
          int percent=(a+b+c)/3;
          return percent;
      }

 };

 int main()
 {
     int m_1,m_2,m_3,per_cent;
     cin>>m_1>>m_2>>m_3;
     Student s1(m_1,m_2,m_3);
     per_cent=s1.average(m_1,m_2,m_3);
     s1.percentage=per_cent;
     Student s2=s1;
     cout<<s1.percentage<<"\n"<<s2.percentage;
 }