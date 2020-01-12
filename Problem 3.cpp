#include <iostream>
using namespace std;

int main()
{
	string x;
	
	cout << "What is your name: ";
	
	cin >> x;
	
	if(x == "Alice" || x == "Bob")
	{
	
	cout << "Hello " << x << '\n';
	
	}
	else
	{
		cout << "Access to Alice and Bob only";
	}
return 0;
}