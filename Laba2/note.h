#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class NOTE {
private:
	string fio;     //ФИО
	string tel;     //Телефон
	int bd[3];		//Дата рождения
	NOTE* ptr;
	int size;
public:
	NOTE();
	NOTE(int x);
	NOTE(const NOTE&);
	~NOTE();

	void push();  //Добавление студента
	void pop(int);
	//void show();  //Вывод
	void SortirovkaPoAlphavitu(); //Вывод студентов по возрастанию среднего балла
	void MonthOfBirthday(); //Вывод студентов, имеющих хотя бы одну оценку 2
	void edit(int);


	friend ostream& operator << (ostream& out, NOTE& obj); //Перегрузка вывода
	friend istream& operator >> (istream& in, NOTE& obj);  //Перегрузка ввода


	string getName();
	string getTel();
	int getBd();

	void setName(string fio);
	void setTel(string tel);
	void setBd(int bd[3]);
};