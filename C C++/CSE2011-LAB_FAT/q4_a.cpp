/* C++ implementation of QuickSort */
#include <iostream>
using namespace std;

struct Participant
{
    int bp;
    int sug;
    int dc;
    string name;
    string event;
    int age;
    string state;

};

// A utility function to swap two elements
void swap(int* x, int* y)
{
	int t = *x;
	*x = *y;
	*y = t;
}


int partition (int a[], int l, int h)
{
	int pivot = a[h]; // pivot
	int i = (l - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j = l; j <= h - 1; j++)
	{

		if (a[j] < pivot)
		{
			i++; 
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i + 1], &a[h]);
	return (i + 1);
}

//  QuickSort function

void quickSort(int a[], int l, int h)
{
	if (l < h)
	{

		int piv = partition(a, l, h);

		// Separately sort elements before
		// partition and after partition
		quickSort(a, l, piv - 1);
		quickSort(a, piv + 1, h);
	}
}



int main()
{
    cout<<"Enter the number of participants:";
    int n;
    cin>>n;
    int drug_content[n];
    Participant p[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of the participant no."<<i+1<<":";
        cin>>p[i].name;
        cout<<"Enter the age of the participant:";
        cin>>p[i].age;
        cout<<"Enter the state of the participant:";
        cin>>p[i].state;
        cout<<"Enter the event of the participant:";
        cin>>p[i].event;
        cout<<"Enter the blood pressure of the participant:";
        cin>>p[i].bp;
        cout<<"Enter the intake of drug (in miligram) of the participant:";
        cin>>p[i].dc;
        drug_content[i]=p[i].dc;
        cout<<"Enter the sugar of the participant:";
        cin>>p[i].sug;
    }
    cout<<"Participant details:"<<endl;
    cout<<"Name\tAge\tState\tBloodPressure\tDrug Intake\tSugar";
    quickSort(drug_content,0,n-1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(drug_content[i]==p[j].dc)
            {
                cout<<endl<<p[j].name<<"\t"<<p[j].age<<"\t"<<p[j].state<<"\t"<<p[j].bp<<"\t"<<p[j].dc<<"\t"<<p[j].sug<<endl;
            }
        }
    }

}


