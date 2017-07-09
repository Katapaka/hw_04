#include<iostream>
using namespace std;

long long Exponent(int n, int e)
{
	long long exp = n;
	for (int i = 1; i < e; i++)
		exp *= n;
	return exp;
}

int main()
{
	//Написать функцию, которая принимает два параметра : 
	//основание степени и показатель степени, и вычисляет степень числа на основе полученных данных
	setlocale(LC_ALL, "RUS");
	int num, exp;

	cout << "Введіть число ";
	cin >> num;
	cout << "Введіть степінь ";
	cin >> exp;
	cout << num << " в " << exp << " степені дорівнює " << Exponent(num, exp) << endl;

	system("pause");
	return 0;
}