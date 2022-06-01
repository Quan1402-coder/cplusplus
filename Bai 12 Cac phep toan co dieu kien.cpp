/* Các phép toán kết hợp nhiều điều kiện
* 1. Phép hoặc: "||" là phép toán 2 ngôi, phải có vế phải và vế trái, True khi 1 trong 2 hoặc cả 2 đúng thì là đúng...còn cả 2 sai thì là sai
* 2. Phép và: "&&" là phép toán tử 2 ngôi, True khi 2 vế trái phải đều đúng còn lại sai hết.
* 3. Phép phủ định: "!" !true = false ; !false = true.
* Bài toán: 
* 1. Viết ctr tính bình phương  của 1 số thỏa mãn:
* a) là số lẻ.
* b) chia hết cho 5
* 
* 2. Viết ctr tính bình phương của một số thỏa mãn:
* a) là số chẵn
* b) chia hết cho 5
*/



#include <iostream>
using namespace std;

int main() {
	int a = 95;

	if ((a % 2 != 0) && (a % 5 == 0)) {
		cout << "a^2 = " << a * a << endl;
	}
	else {
		cout << "a khong thoa man dieu kien da cho, thu lai! " << endl;
	}

	return 0;
}