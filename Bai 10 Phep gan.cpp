/* Phép gán trong C++ là có dấu = trong đó
=   -=   +=   /=   %=
	a /= b; // a = a / b;
	a *= b; // a = a * b;
	a %= c; // a = a / c;
	sum += c;
*/

#include <iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 200;
	int c = 400;

	int sum = a + b;
	int sub = c - a;
	int mul = a * b;

	a += c;
	b = a + sub;
	c = b - mul;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}