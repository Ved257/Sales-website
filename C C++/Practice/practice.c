#include<stdio.h>
#include<math.h>

float distance(float *x1,float *x2,float *y1,float *y2)
{
    float d=sqrt(pow((*x2-*x1),2)+pow((*y2-*y1),2));
}
float S(float *a,float *b,float *c)
{
    float s1;
    s1=(*a+*b+*c)/2.0;
    return s1;
}

float area(float *a,float *b,float *c)
{
    float s,A;
    s=S(a,b,c);
    A=sqrt(s*(s-*a)*(s-*b)*(s-*c));
    return A;
}
void main()
{
    float x=3.0,y=5.0,z=4.0;
    float Area=area(&x,&y,&z);
    printf("Area of the triangle is: %f",Area);
}