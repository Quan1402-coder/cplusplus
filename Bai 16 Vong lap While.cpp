/* Cấu trúc vòng loại While ( vòng lặp để thực hiện các ctr lặp đi lặp lại)
* 
* while ( điều kiện ){
* ND cần thực hiện
* }
* 
* VD sd vòng lặp while viết ctr lặp n lần việc nhập giá trị nguyên
* dương và hiển thị giá trị đảo của số vừa nhập.
* VD: n = 3:
*    lần 1: nhập 123 --> 321
*    lần 2: nhập 565656 --> 656565
*    lần 3: nhập 9876543 --> 3456789
*/


#include <iostream>
using namespace std;

int main() {
	int n;
	cout << " Nhap so nguyen duong n: ";

	cin >> n; // doc n tu ban phim

	if (n > 0) {
		while (n--) {
			int t;
			cout << "Nhap so can dao: ";
			cin >> t;
			cout << t << " --> ";
			int tDao = 0;
			while (t) {
				tDao = tDao * 10 + t % 10;
				t /= 10;
			}
			cout << tDao << endl;
		}
	}
	else {
		cout << " Vui long nhap n > 0! " << endl;
	}

	return 0;
}