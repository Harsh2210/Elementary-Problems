#include <iostream>
using namespace std;

int main()
{

	cout << "Enter the value of n: ";
	
	int n,i,x=0;
	
	cin >> n;
	
	for(i=1; i<=n; i++)
	{
		
		x = x + i ;
		
	}
	
	cout << "Sum of n numbers is: " << x;

return 0;
}
