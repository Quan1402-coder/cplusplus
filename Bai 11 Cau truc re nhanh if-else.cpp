/* Cấu trúc rẽ nhánh if - else 
* if - điều kiện
* else - các trường hợp có thể xảy ra
* Nếu có mình if thì ctr vẫn sẽ chạy còn nếu có thêm else thì chương trình sẽ phân loại để xếp vào dạng phù hợp.
* Bài toán: A được điểm trung bình là 9.0. Viết một chương trình để xem A thuộc dang nao
*/

#include <iostream>
using namespace std;

#define PASS 4.0
#define MEDIUM 6.0
#define GOOD 8.5

int main() {
	float t = 10.0;

	if (t >= GOOD) {
		cout << " Congraturarion!!! A is Good Student, very nice, thanks and good luck!" << endl;
	}
	else if (t >= MEDIUM && t < GOOD) {
		cout << " A is Medium Student, good luck every day!" << endl;
	}
	else if (t >= PASS && t < MEDIUM) {
		cout << " A is Passed this student! " << endl;
	}
	else if (t < PASS) {
		cout << " A failed this subject" << endl;
	}

	return 0;
}
