#include "z1.h"
#include "z2.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string menu = "����:\n1 - ������ �������\n2 - ������ �������\n0 - ���������� ������\n>";
	int knopka;
	bool mode = true;
	while (mode) {
		cout << menu;
		cin >> knopka;
		if (cin.fail()) {
			knopka = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (knopka) {
		case 1:
			task1();
			system("pause");
			break;
		case 2:
			task2();
			system("pause");
			break;
		case 0:
			mode = false;
			cout << "\n���������� ������" << endl;
			break;
		default:
			cout << endl << "������� ������ �����!" << endl
				<< endl;
			system("pause");
			break;
		}
	}
	return 0;
}