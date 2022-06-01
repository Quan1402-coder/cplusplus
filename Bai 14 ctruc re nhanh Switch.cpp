/* Cấu trúc rẽ nhánh Switch ( dựa trên các đk, có nhiều trường hợp xảy ra)

switch(variable) {
   case value1:
   break;
   .........
*/

#include <iostream>
using namespace std;

int main() {

	char choice = ' ';
	cout << "What countries does the United Kingdom include?" << endl;
	cout << "A. England, Scotland, Wales, Northern Ireland" << endl;
	cout << "B. Viet Nam, USA, China, Malaysia" << endl;
	cout << "C. England, Wales, Myanmar, SocSon" << endl;
	cout << "D. France, England, Spain, Italia" << endl;
	cout << " Ban Bong xinh gai chon dap an di nao, Dung thuong, Sai phat!!!" << endl;
	cin >> choice;

	switch (choice)
	{
	case 'A':
	case 'a':
		cout << "Exactly!!! Amazing, Ban qua xuat sac!!!>" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Ban cui bap qua, chon lai dap an khac deee @@" << endl;
		break;
	case 'C':
	case 'c':
		cout << "Co SOcSOn kia, sai bet roi tang ban combo rua bat giat quan ao nhe $$$" << endl;
		break;
	case 'D':
	case 'd':
		cout << "Chua thay ai am hieu dia ly nhu ban, toi cho ban 1 co hoi nua, neu sai tiep ban se bi an THIT NGAY LAP TUC " << endl;
		break;

	default:
		cout << "Dap ban chon khong hop le, vui long con 4 dap an toi dua thoi, ko an dam day @@" << endl;
		break;
	}

	return 0;
}