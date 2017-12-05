// Devin Checa
#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
	int input = 0;
	cout << "Input factorial to calculate: " << endl;
	cin >> input;
}
int factorial(int n)
{
	int product = 0;
	n > 1 ?
		product = (n * factorial(n - 1)):
		product = 1;
	return product;
}