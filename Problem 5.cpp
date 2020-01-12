#include <iostream>
using namespace std;

int main()
{

	cout << "Enter the value of n: ";
	
	int n,i,x = 0;
	
	cin >> n;
	
	for(i=1; i<=n; i++)
	{
		
		x = x + i ;
		
	}
	
	if(x%3 == 0 || x%5== 0 )
	{
		cout << "Sum of n numbers is: " << x;
	}
	else 
	{
		cout << "Not a multiple of 3 or 5";
	}
return 0;
}