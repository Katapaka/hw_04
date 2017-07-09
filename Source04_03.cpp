#include<iostream>
using namespace std;

void PerfectNumber(long long _check)
{
	long long sum = 0;
	for (long long i = 1; i < _check; i++)
		if (!(_check%i))
			sum += i;
	if (_check == sum)
		cout << _check << " ";
	
}

int main()
{
	//исло называется совершенным, если сумма всех его делителей равна ему самому.
	//Напишите функцию поиска таких чисел во введенном интервале.
	setlocale(LC_ALL, "RUS");

	long long firstNum, secondNum;
	cin >> firstNum >> secondNum;
	for (long long i = firstNum; i <= secondNum; i++)	
		PerfectNumber(i);
	cout << endl;
	system("pause");
	return 0;
}
