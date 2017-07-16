#include<iostream>
using namespace std;

//Функція symbolCheck(char _ch) включає в себе код з завдання Source02_02
void symbolCheck(char _ch)
{
	if ((int)_ch >= 32 && (int)_ch <= 47)
		cout << _ch << " is a symbol" << endl;
	else if ((int)_ch >= 48 && (int)_ch <= 57)
		cout << _ch << " is a number" << endl;
	else if ((int)_ch >= 58 && (int)_ch <= 64)
		cout << _ch << " is a symbol" << endl;
	else if ((int)_ch >= 65 && (int)_ch <= 90)
		cout << _ch << " is a capital letter" << endl;
	else if ((int)_ch >= 91 && (int)_ch <= 96)
		cout << _ch << " is a symbol" << endl;
	else if ((int)_ch >= 97 && (int)_ch <= 122)
		cout << _ch << " is a lowercase letter" << endl;
	else if ((int)_ch >= 123 && (int)_ch <= 127)
		cout << _ch << " is a symbol" << endl;
	else	
		cout << "ERROR: Can\'t identificate char. Charcode " << (int)_ch << endl;			
}

int main()
{
	//Написать функцию, проверяющую является ли переданный ей параметр алфавитно - цифровым.
	setlocale(LC_ALL, "RUS");
	char ch;
	cout << "Please enter char ";
	cin >> ch;

	symbolCheck(ch);		

	system("pause");
	return 0;
}
