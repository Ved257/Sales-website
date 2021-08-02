#include <iostream>
#include <iterator>
#include <map>
#include <list>
#include<algorithm>

using namespace std;

int main()
{
    map<int,int> plant;
    list<int>HEIGHTS;
    int n;
    cout<<"Enter the number of plants ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ID,height;
        cout<<"Enter the ID of the plant ";
        cin>>ID;
        cout<<"Enter the height of the plant ";
        cin>>height;
        HEIGHTS.push_back(height);
        plant.insert(pair<int,int>(ID,height));
    }
    HEIGHTS.sort();
    list<int>::iterator x;
    map<int, int>::iterator y;
    cout<<"\tID\tHEIGHT\n";
    for(x=HEIGHTS.begin();x!=HEIGHTS.end();x++)
    {
        for (y=plant.begin();y!=plant.end();y++)
        {
            if(*x==y->second)
            {
                cout<<"\t"<<y->first<<"\t"<<y->second<<endl;
            }
        }
    }   
}