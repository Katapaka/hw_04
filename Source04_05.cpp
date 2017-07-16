#include<iostream>
using namespace std;

bool symbolCheck(char _ch)
{
	if ((_ch >= 48 && _ch <= 57) || (_ch >= 65 && _ch <= 90) || (_ch >= 97 && _ch <= 122))
		return true;
	else
		return false;
}

int main()
{
	//Написать функцию, проверяющую является ли переданный ей параметр алфавитно - цифровым.
	setlocale(LC_ALL, "RUS");
	char ch;
	cout << "Please enter char ";
	cin >> ch;

	if (symbolCheck(ch))
		cout << "It\'s an alphabet-number char\n";
	else
		cout << "It\'s not an alphabet-number char\nIt\'s a symbol\n";

	system("pause");
	return 0;
}
