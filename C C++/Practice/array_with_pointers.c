#include<stdio.h>
//bubble sort
void main()
{
    int arr[5]={1,6,4,9,3};
    int *p=arr;
    int i,j,temp;
    for (i=0;i<5-1;i++)
    {
        for(j=0;j<5-1-i;j++)
        {

            if(*(p+i)<*(p+1+i))
            {
                temp=*(p+i);
                *(p+i)=*(p+1+i);
                *(p+1+i)=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}