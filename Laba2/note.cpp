#include "note.h"
using namespace std;

NOTE::NOTE() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� ��� ������ NOTE" << endl << endl;
	fio = "";
	tel = "";
	size = 0;
}

NOTE::NOTE(int x) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ � ���������� ��� ������ NOTE" << endl << endl;
}

NOTE::NOTE(const NOTE&) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� ��� ������ NOTE" << endl << endl;
}

NOTE::~NOTE() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� ��� ������ NOTE" << endl << endl;
}

string NOTE::getName() {
	return this->fio;
}

string NOTE::getTel() {
	return this->tel;
}

int NOTE::getBd() {
	return this->bd[3];
}

void NOTE::setName(string fio) {
	this->fio = fio;
}

void NOTE::setTel(string tel) {
	this->tel = tel;
}

void NOTE::setBd(int bd[3]) {
	this->bd[3] = bd[3];
}

void NOTE::push() {
	NOTE* temp = new NOTE[size + 1];
	for (int i = 0; i < size; ++i) {
		temp[i] = ptr[i];
	}
	delete[] ptr;
	ptr = temp;
	cin >> ptr[size];
	++size;
	cout << endl << endl << "����� ������ ��������" << endl << endl;
}

void NOTE::pop(int num) {
	try {
		if (size == 0) {
			exception error("�����");
			throw error;
		}
		if (num < 0 || num >= size) {
			exception bug("�������� �����");
			throw bug;
		}
		NOTE* temp = new NOTE[size - 1];
		ptr[num] = ptr[size - 1];
		for (int i = 0; i < size - 1; ++i) {
			temp[i] = ptr[i];
		}
		delete[] ptr;
		ptr = temp;
		--size;
		cout << endl << endl << "������ ������" << endl << endl;
	}
	catch (exception& error) {
		cout << error.what() << endl << endl;
	}
}

void NOTE::MonthOfBirthday() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� �����: ";
	cin >> a;
	bool flag = false;
	if (size == 0) {
		cout << "�����" << endl << endl;
	}

	else {
		for (int i = 0; i < size; ++i) {
			if (a == ptr[i].bd[1]) {
				cout << ptr[i] << endl;
				flag = true;
			}
		}
		if (!flag)
		cout << "����� ����� ���" << endl;
	}

}

void NOTE::SortirovkaPoAlphavitu() {
	setlocale(LC_ALL, "Russian");
	NOTE temp;

	if (size == 0) {
		cout << "�����" << endl << endl;
	}

	else {
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size - 1; ++j) {
				if (ptr[j].fio > ptr[j + 1].fio) {
					temp = ptr[j];
					ptr[j] = ptr[j + 1];
					ptr[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < size; ++i) {
			cout << ptr[i] << endl;
		}
	}

}

void NOTE::edit(int change) {
	try {
		if (size == 0) {
			exception error("�����");
			throw error;
		}
		if (change < 0 || change >= size) {
			exception bug("�������� �����");
			throw bug;
		}
		cin >> ptr[change];
	}
	catch (exception& bug) {
		cout << bug.what() << endl << endl;
	}
}

ostream& operator<<(ostream& out, NOTE& obj) {   //����� ������
	setlocale(LC_ALL, "Russian");
	out << "������� � ��������: " << obj.fio << endl;
	out << "����� ��������: " << obj.tel << endl;
	out << "���� ��������: " << obj.bd[0] << " " << obj.bd[1] << " " << obj.bd[2] << endl;
	return out;
}

istream& operator>>(istream& in, NOTE& obj) {   //���� ������
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "������� � ��������: ";
	getchar();
	getline(cin, obj.fio);
	cout << "����� ��������: ";
	getchar();
	getline(cin, obj.tel);
	cout << "������� ���� ��������:" << endl;
	while (1) {
		cout << "����: ";
		cin >> obj.bd[0];
		if (obj.bd[0] < 0 ||obj.bd[0] > 31) cout << "������������ ������!!!\n������� ������!!!" << endl << endl;
		else break;
	}

	while (1) {
		cout << "�����: ";
		cin >> obj.bd[1];
		if (obj.bd[1] < 0  ||obj.bd[1] > 31) cout << "������������ ������!!!\n������� ������!!!" << endl << endl;
		else break;
	}
	cout << "���: ";
	cin >> obj.bd[2];
	return in;
}