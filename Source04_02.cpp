#include<iostream>
using namespace std;

int summary(int _firstNum, int _secondNum)
{	
	int sum;										// ��������� ����� sum
	if (_firstNum > _secondNum)						// ���� ����� ����� ����� �� ����� - ���������
	{
		sum = _secondNum;							// ����������� ����� sum ��� ���� ������ _firstNum � _secondNum
		_secondNum = _firstNum;
		_firstNum = sum;
	}
	sum = 0;										// �������� �������� ����
	for (int i = _firstNum+1; i < _secondNum; i++)	//���� ���������� ���� �������� �����
		sum += i;
	return sum;
}

int main()
{	//�������� �������, ������� �������� � �������� ���������� 2 ����� ����� 
	//� ���������� ����� ����� �� ��������� ����� ����
	setlocale(LC_ALL, "RUS");
	int firstNum, secondNum;
	
	//��������� �����
	cout << "������ ����� ����� ";
	cin >> firstNum;
	cout << "������ ����� ����� ";
	cin >> secondNum;
	cout << summary(firstNum, secondNum) << endl;

	
	system("pause");
	return 0;
}