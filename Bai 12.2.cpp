/*
* * 2. Viết ctr tính bình phương của một số thỏa mãn:
* a) là số chẵn
* b) chia hết cho 5
*/

#include <iostream>
using namespace std;

int main() {

	int a = 10;
	if ((a % 2 == 0) && (a % 5 == 0)) {
		cout << "a ^ 2 = " << a * a << endl;
	}
	else {
		cout << " Khong thoa man dieu kien, thu so khac " << endl;
	}

	return 0;
}