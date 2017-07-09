#include<iostream>
using namespace std;

int summary(int _firstNum, int _secondNum)
{	
	int sum;										// декларуємо знiнну sum
	if (_firstNum > _secondNum)						// якщо перше число бiльше за друге - вiдсортуємо
	{
		sum = _secondNum;							// використаємо змiнну sum для змiни мiсцями _firstNum i _secondNum
		_secondNum = _firstNum;
		_firstNum = sum;
	}
	sum = 0;										// обнуляєм значення суми
	for (int i = _firstNum+1; i < _secondNum; i++)	//цикл обчислення суми дiапазона чисел
		sum += i;
	return sum;
}

int main()
{	//Написать функцию, которая получает в качестве параметров 2 целых числа 
	//и возвращает сумму чисел из диапазона между ними
	setlocale(LC_ALL, "RUS");
	int firstNum, secondNum;
	
	//Отримання даних
	cout << "Введiть перше число ";
	cin >> firstNum;
	cout << "Введiть друге число ";
	cin >> secondNum;
	cout << summary(firstNum, secondNum) << endl;

	
	system("pause");
	return 0;
}