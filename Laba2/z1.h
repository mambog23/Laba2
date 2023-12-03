#pragma once
#include "note.h"
void task1() {
	NOTE s;
	int button;
	bool flag = true;
	int i;
	while (flag) {
		cout << "Меню: " << endl << endl;
		cout << "1 - Добавить человека" << endl;
		cout << "2 - Удаление человека" << endl;
		cout << "3 - Вывод людей по алфавиту" << endl;
		cout << "4 - Вывод людей по месяцу" << endl;
		cout << "5 - Редактирование данных человека" << endl;
		cout << "0 - Вернуться к выбору задания" << endl << endl;
		cout << "Выберите пункт: ";
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
			cout << "Выберите для удаления: ";
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
			cout << "Выберите для изменения: ";
			cin >> i;
			s.edit(i);
			system("pause");
			break;
		case 0:
			flag = false;
			cout << "\nЗавершение работы программы" << endl;
			break;
		default:
			cout << endl << "Введите другое число!" << endl
				<< endl;
			system("pause");
			break;
		}
	}
}