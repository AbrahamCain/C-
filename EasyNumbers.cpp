#include <iostream>

using namespace std;

int main()
{
	//declare variables
	int a = 1, b = 6, c = 24, d;
	
	//do some math
	d = b - ((a * c) / b);
	
	//print the output
	cout << "6 - ((1 x 24) / 6) = ";
	cout << d << endl;
	
	//exit with success code
	return 0;
}
