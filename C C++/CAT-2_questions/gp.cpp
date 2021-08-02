#include <iostream>
#include<math.h>
using namespace std;

int Nth_of_GP(int a, int r, int N)
{
	// using formula to find
	// the Nth term
	// TN = a1 * r(N-1)
	return( a * (int)(pow(r, N - 1)) );
	
}

// Driver code
int main()
{
	// starting number
	int a = 2;
	
	// Common ratio
	int r = 3;
	
	// N th term to be find
	int N = 5;
	
	// Display the output
	cout << "The "<< N <<"th term of the series is : "
		<< Nth_of_GP(a, r, N);

	return 0;
}
