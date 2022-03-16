#include <iostream>
#include "string.h"
using namespace std;

//—оздать класс дл€ работы со строками. —оздать конструктор 
//по усмолчанию с 80 символами, конструктор с произвольным размером, с тектом пользовател€.
//Ќу и еще куча вс€кой ерунды по желанию

int main() {
	String stroka1, stroka2("asdasd"), stroka("asdasdh");

	cout << stroka2.len() << endl;

	
	cout << stroka + stroka2;
	
}