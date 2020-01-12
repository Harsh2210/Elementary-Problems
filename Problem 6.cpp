#include <iostream>
using namespace std;

int main()
{

	cout << "Enter the value of n: ";
	
	int n,i,x = 0;
	
	cin >> n;
	
	char Char;
	
	cout << "Enter + or * for Sum or Product of N numbers: ";
	
	cin >> Char;
	
	switch(Char){
	
	case('+'):
	
	for(i=1; i<=n; i++)
	{
		
		x = x + i ;
		
	}
	
	cout << "Sum of N numbers: " << x;
	break;
	
	
	case('*'):
		
		for(i=1; i<=n; i++)
	{
		
		x = x * i ;
		
	}
	
	cout << "Product of N numbers: " << x;
	
	break;
	
	}
	
return 0;
}