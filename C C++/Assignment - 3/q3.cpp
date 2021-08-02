#include<iostream>
#include<string.h>

using namespace std;

struct mobile {
    string modelname,os;
    int year,reso,ram, memory;
};

struct mobile getdetails()
{
    struct mobile p;
    cout<<"Enter Model Name"<<endl;
    cin>>p.modelname;
    cout<<"Enter Year of Manufacture"<<endl;
    cin>>p.year;
    cout<<"Enter Camera Resolution"<<endl;
    cin>>p.reso;
    cout<<"Enter RAM"<<endl;
    cin>>p.ram;
    cout<<"Enter Memory Card size"<<endl;
    cin>>p.memory;
    cout<<"Enter Operating System"<<endl;
    cin>>p.os;

    return(p);
}

void print(struct mobile p)
{
   
    cout<<"Model Name"<<endl;
    cout<<p.modelname<<endl;
    cout<<"Year of Manufacture"<<endl;
    cout<<"Camera resolution"<<endl;
    cout<<p.reso<<endl;
    cout<<"RAM"<<endl;
    cout<<p.ram<<endl;
    cout<<"Memory card Size"<<endl;
    cout<<p.memory<<endl;
    cout<<"Operating system"<<endl;
    cout<<p.os<<endl;
}

void InsSort (struct mobile arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        struct mobile key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j].ram>key.ram)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of phones"<<endl;
    cin>>n;

    struct mobile arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Phone #"<<i+1<<endl;
        arr[i]=getdetails();
    }
   
    InsSort(arr,n);
    cout<<"Final Insertion Sort"<<endl;

    for (int i=0;i<n;i++)
    {
        cout<<"Phone #"<<i+1<<endl;
        print(arr[i]);
    }
}

