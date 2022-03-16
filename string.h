#pragma once

//#include <cstring>
#include <iostream>
using namespace std;

class String {
	char* str;
	int size;
public:
	String() : String(80) {}
	String(int s) {
		size = s;
		str = new char[size];
	}
	String(const char* string) {
		size = strlen(string);
		str = new char[size + 1];
		for (int i = 0; i < size; i++) {
			str[i] = string[i];
		}
		str[size] = '\0'; //������������� ������� ��������
	}
	String(const String& copys) {
		size = copys.size;
		str = new char[size+1];
		for (int i = 0; i < size; i++) {
			str[i] = copys.str[i];
		}
		str[size] = '\0'; //������������� ������� ��������
	}

	int len(); //������������ � ����� ������ ������� string
	
	~String()	{
		if (str) {
			delete[] str;
		}
	}

	String operator + (const String& plus);
	friend istream& operator >> (istream& stream, String& st); //���������� ��������� ����� >>
	friend ostream& operator << (ostream& stream, const String& st); //���������� ��������� ������ <<
};

