// Devin Checa
// can only handle up to 12!
#include <iostream>
using namespace std;
long factorial(short n);
int main()
{
	short input = 0;
	cout << "Input factorial to calculate: " << endl;
	cin >> input;
	cout
		<< endl
		<< input
		<< "! evaluates to: "
		<< endl
		<< factorial(input)
		<< endl;
	system("pause");
	return 0;
}
long factorial(short n)
{
	long product = 0;
	n > 1 ?
		product = n * factorial(n - 1):
		product = 1;
	return product;
}