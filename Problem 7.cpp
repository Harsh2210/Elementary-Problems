#include <iostream>
using namespace std;

int main()
{

	int i, n, x;
	
	cout << "Enter the value of N: ";
	
	cin >> n;
	
	for(i=1; i<=10; i++)
	{
		
		x = n * i;
		
		cout << n << " * " << i << " = " << x << '\n';
		
	}
	
return 0;
}