#pragma once
#include "note.h"
void task1() {
	NOTE s;
	int button;
	bool flag = true;
	int i;
	while (flag) {
		cout << "����: " << endl << endl;
		cout << "1 - �������� ��������" << endl;
		cout << "2 - �������� ��������" << endl;
		cout << "3 - ����� ����� �� ��������" << endl;
		cout << "4 - ����� ����� �� ������" << endl;
		cout << "5 - �������������� ������ ��������" << endl;
		cout << "0 - ��������� � ������ �������" << endl << endl;
		cout << "�������� �����: ";
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button) {
		case 1:
			s.push();
			system("pause");
			break;
		case 2:
			cout << "�������� ��� ��������: ";
			cin >> i;
			s.pop(i);
			system("pause");
			break;
		case 3:
			s.SortirovkaPoAlphavitu();
			system("pause");
			break;
		case 4:
			s.MonthOfBirthday();
			system("pause");
			break;
		case 5:
			s.SortirovkaPoAlphavitu();
			cout << "�������� ��� ���������: ";
			cin >> i;
			s.edit(i);
			system("pause");
			break;
		case 0:
			flag = false;
			cout << "\n���������� ������ ���������" << endl;
			break;
		default:
			cout << endl << "������� ������ �����!" << endl
				<< endl;
			system("pause");
			break;
		}
	}
}