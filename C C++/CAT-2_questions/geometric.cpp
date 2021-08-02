#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    list<int> l1,l2;
    int n1,n2,x;
    cout<<"Enter the number of elements in list 1 ";
    cin>>n1;
    cout<<"Enter the number of elements in list 2 ";
    cin>>n2;
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter element ";
        cin>>x;
        l1.push_back(x);
    }
    for(int i=0;i<n2;i++)
    {
        cout<<"Enter element ";
        cin>>x;
        l2.push_back(x);
    }
    l1.merge(l2);
    l1.sort();
    list<int>::iterator i;
    for(i=l1.begin();i!=l1.end();i++)
    {
        cout<<*i<<endl;
    }
    reverse(l1.begin(),l1.end());
    for(i=l1.begin();i!=l1.end();i++)
    {
        cout<<*i<<endl;
    }
    l1.unique();
    for(i=l1.begin();i!=l1.end();i++)
    {
        cout<<*i<<endl;
    } 
}