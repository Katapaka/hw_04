#include<iostream>
using namespace std;

int summary(int _firstNum, int _secondNum)
{	
	int sum;										// ��������� ��i��� sum
	if (_firstNum > _secondNum)						// ���� ����� ����� �i���� �� ����� - �i��������
	{
		sum = _secondNum;							// ����������� ��i��� sum ��� ��i�� �i����� _firstNum i _secondNum
		_secondNum = _firstNum;
		_firstNum = sum;
	}
	sum = 0;										// �������� �������� ����
	for (int i = _firstNum+1; i < _secondNum; i++)	//���� ���������� ���� �i������� �����
		sum += i;
	return sum;
}

int main()
{	//�������� �������, ������� �������� � �������� ���������� 2 ����� ����� 
	//� ���������� ����� ����� �� ��������� ����� ����
	setlocale(LC_ALL, "RUS");
	int firstNum, secondNum;
	
	//��������� �����
	cout << "����i�� ����� ����� ";
	cin >> firstNum;
	cout << "����i�� ����� ����� ";
	cin >> secondNum;
	cout << summary(firstNum, secondNum) << endl;

	
	system("pause");
	return 0;
}