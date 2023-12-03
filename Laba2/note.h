#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class NOTE {
private:
	string fio;     //���
	string tel;     //�������
	int bd[3];		//���� ��������
	NOTE* ptr;
	int size;
public:
	NOTE();
	NOTE(int x);
	NOTE(const NOTE&);
	~NOTE();

	void push();  //���������� ��������
	void pop(int);
	//void show();  //�����
	void SortirovkaPoAlphavitu(); //����� ��������� �� ����������� �������� �����
	void MonthOfBirthday(); //����� ���������, ������� ���� �� ���� ������ 2
	void edit(int);


	friend ostream& operator << (ostream& out, NOTE& obj); //���������� ������
	friend istream& operator >> (istream& in, NOTE& obj);  //���������� �����


	string getName();
	string getTel();
	int getBd();

	void setName(string fio);
	void setTel(string tel);
	void setBd(int bd[3]);
};