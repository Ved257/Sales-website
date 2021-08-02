#include<iostream>
using namespace std;

template<class T>
int max_marks_calc(T x, T y) {
    if (x > y) return x;
    else return y;
}

class Student {
    public:
    string name, regno;
    int marks;
    void GET()
    {
        cin>>name;
        cin>>regno;
        cin>>marks;
    }

};

int main() {
    int n;
    cin >> n;
    
    Student S[n];
    for (int i = 0; i < n; i++) {
        S[i].GET();
    }

    int max_marks = S[0].marks;
    for (int i = 0; i < n; i++)
        if (max_marks_calc(S[i].marks, max_marks)==S[i].marks)
            max_marks = S[i].marks;
    
    for (int i = 0; i < n; i++)
        if (S[i].marks == max_marks)
            cout << S[i].regno;

    return 0;
}