/* Toan tu 3 ngôi 
* Cú pháp tổng quát: biến = (Điều kiện) ? biểu thức 1 : biểu thức 2;
* Y như cấu trúc nhánh if-else nhưng ngắn gọn hơn.
* Bài tập: SV A có điểm trung bình môn là t, đk để qua môn là t>= 4.0
* XÁc định trạng thái của A.
* **Lam theo lenhj re nhanh if - else
* #include <iostream>
using namespace std;

#define PASS 4.0f

int main() {
	float t = 8.0f;

	if (t >= PASS) {
		cout << "Congraturaltion!!! A is passed this subject! " << endl;
	}
	else {
		cout << "A failed this subject, good luck! " << endl;
	}

	return 0;
}
*/



#include <iostream>
using namespace std;

#define PASS 4.0f

int main() {
	float t = 10.0f;

	(t >= PASS) ? cout << " Congratulation, very good!\n " : cout << "A failed, chaizzo!!!\n";

	return 0;
}