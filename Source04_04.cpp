#include<iostream>
#include<iomanip> //для функцій setw() і setfill()
using namespace std;

void showCard(int _suit, int _num)
{
	int filler = 6;																															// заповнення пробілами в функції setw()
	char upLeftCorner = 218, upRightCorner = 191, horizontalLine = 196, vertivalLine = 179, downLeftCorner = 192, downRightCorner = 217;	//символи контура карти
	char  charCard[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };															//масив назви(номеру) карти
	_suit += 2;																																//встановлення коду ASCII символа масті

	system("cls");
	cout << upLeftCorner << setfill(horizontalLine) << setw(8) << upRightCorner << endl;													//верхня лінія
	if (_num == 10)																															//якщо карта Десятка
	{
		filler--;																															//зменшуєм величину автозаповнення
		cout << vertivalLine << "1" << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;			//додатково виводимо "1"
	}
	else 
		cout << vertivalLine << charCard[_num-1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;						//якщо карта не Десятка виводимо її назву з масиву
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	if (_num == 10)																															//знову перевіряємо чи карта Десятка
		cout << vertivalLine<< setfill(' ') << setw(filler) << "1" << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
	else
		cout << vertivalLine << setfill(' ') << setw(filler) << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
	cout << downLeftCorner << setfill(horizontalLine) << setw(8) << downRightCorner << endl;												//нижня лінія

}

int main()
{
	//Написать функцию, выводящую на экран переданную ей игральную карту.	

	int suit, num;																															//змінна масті і номеру карти
	while (1)																																//Безкінечний цикл(опціонально)
	{
		system("cls");
		cout << "Please enter suit\n1 - Hearts\n2 - Diamonds\n3 - Clubs\n4 - Spades" << endl;
		cin >> suit;																														//отримання даних масті
		if (suit < 1 || suit > 4)
		{
			cout << "ERROR: Incorrect suit\n";
			system("pause");
			exit(1);
		}
		system("cls");
		cout << "Enter card\n1 - Ace \n2 - Two\n3 - Three\n4 - Four\n5 - Five\n6 - Six\n7 - Seven\n8 - Eight\n9 - Nine\n10 - Ten\n11 - Jacket\n12 - Quin\n13 - King" << endl;
		cin >> num;																															//отримання даних номеру
		if (num < 1 || num > 13)
		{
			cout << "ERROR: Incorrect card\n";
			system("pause");
			exit(2);
		}
		showCard(suit, num);																												//виклик функції

		system("pause");																													//пауза перед повтором циклу
	}
	return 0;
}
