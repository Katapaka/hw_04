#include<iostream>
#include<math.h>	//для abs()
using namespace std;

double Exponent(int _num, int _exp)
{
	double exp = _num;
	for (int i = 1; i < abs(_exp); i++)	//цикл визначення спетеня числа
		exp *= _num;
		
	if (_exp < 0)						//якщо степiнь вiд"ємний
		return 1 / exp;					//повертаємо обернене число
	return exp;								
}

int main()
{
	//Написать функцию, которая принимает два параметра : 
	//основание степени и показатель степени, и вычисляет степень числа на основе полученных данных
	setlocale(LC_ALL, "RUS");
	int num, exp;

	cout << "Введiть число ";
	cin >> num;
	cout << "Введiть степiнь ";
	cin >> exp;
	cout << num << " в степенi " << exp << " дорiвнює " << Exponent(num, exp) << endl;

	system("pause");
	return 0;
}