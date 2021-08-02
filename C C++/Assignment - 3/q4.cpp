#include<iostream>
#include<string>
using namespace std;

struct details
{
    int hospnum,age,token,height,weight;
    string name,reason;
};

struct details getdetails()
{
    struct details a;

    cout<<"Enter Hospital Number"<<endl;
    cin>>a.hospnum;
    cout<<"Enter Patient Name"<<endl;
    cin.get();
    getline(cin,a.name);
    cout<<"Enter Age"<<endl;
    cin>>a.age;
    cout<<"Enter Token Number"<<endl;
    cin>>a.token;
    cout<<"Enter Height"<<endl;
    cin>>a.height;
    cout<<"Enter Weight"<<endl;
    cin>>a.weight;
    cout<<"Reason of visit (Disease)"<<endl;
    cin.get();
    getline(cin,a.reason);

    return (a);
    
}

void print(struct details a)
{
    cout<<"Hospital Number"<<endl;
    cout<<a.hospnum<<endl;
    cout<<"Patient Name"<<endl;
    cout<<a.name<<endl;
    cout<<"Age"<<endl;
    cout<<a.age<<endl;
    cout<<"Token Number "<<endl;
    cout<<a.token<<endl;
    cout<<"Height"<<endl;
    cout<<a.height<<endl;
    cout<<"Weight"<<endl;
    cout<<a.weight<<endl;
    cout<<"Disease"<<endl;
    cout<<a.reason<<endl;
}

void QuickSort(struct details arr[], int first, int last)
{
    int pivot,i,j;
    struct details temp;
    if (first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while (i<j)
        {
            while(arr[i].token<=arr[pivot].token && i<last)
            i++;

            while(arr[j].token>=arr[pivot].token)
            j--;

            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        QuickSort(arr,first,j-1);
        QuickSort(arr,j+1,last);
    }
}

int main()
{
    int n;
    cout<<"Number of patients"<<endl;
    cin>>n;
    struct details arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Patient #"<<i+1<<endl;
        arr[i]=getdetails();
    }

    QuickSort(arr,0,n-1);
    cout<<"Patients sorted in ascneding order based on token number:"<<endl;
    for (int i=0;i<n;i++)
    {

        cout<<"Patient #"<<i+1<<endl;
        print(arr[i]);
    }

}

