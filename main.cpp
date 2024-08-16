#include <iostream>

using namespace std;

int Double(int* input)
{
	*input *= 2;
	return *input;
}

int main()
{
	int a = 3;
	
	cout << a << endl;
	
	cout << Double(&a) << endl;
	
	cout << a << endl;
	
	return 0;
}
