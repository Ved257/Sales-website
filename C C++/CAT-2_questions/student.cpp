#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

class student{
    public:
    string name;
    string regno;
    int marks;
    void get(){
        cin>>name>>regno>>marks;
    }
};

void search(student s[], int n, int smark){
    for(int i=0; i<n; i++){
        if(s[i].marks>=smark){
            cout<<s[i].name<<endl;
            cout<<s[i].regno<<endl;
            cout<<s[i].marks<<endl;
        }
    }
}
void search(student s[], int n, int hmark, int lmark){
    for(int i=0; i<n; i++){
        if(s[i].marks>lmark && s[i].marks<hmark){
            cout<<s[i].name<<endl;
            cout<<s[i].regno<<endl;
            cout<<s[i].marks<<endl;
        }
    }
}