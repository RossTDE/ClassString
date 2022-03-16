#include <iostream>
#include "string.h"

int String :: len() {
	return size;
}

String String::operator + (const String& plus) {
	String temp(size + plus.size + 1);
	int i = 0;
	for(; i < this->size; i++) {
		temp.str[i] = this->str[i];
		cout << i << " " << temp.str[i] << endl;
	}
	for (int j = 0; j < plus.size; i++, j++) {
		temp.str[i] = plus.str[j];
		cout << i << " " << temp.str[i] << endl;
	}
	temp.str[temp.size - 1] = 0;
	return temp;
}

istream& operator >> (istream& stream, String& st) {
	stream >> st.str; //получает поле класса
	return stream;
}

ostream& operator << (ostream& stream, const String& st) {
	stream << st.str; //выдаёт поле класса
	return stream;
}