#include<iostream>
#include<math.h>	//��� abs()
using namespace std;

double Exponent(int _num, int _exp)
{
	double exp = _num;
	for (int i = 1; i < abs(_exp); i++)	//���� ���������� ������� �����
		exp *= _num;
		
	if (_exp < 0)						//���� ����i�� �i�"�����
		return 1 / exp;					//��������� �������� �����
	return exp;								
}

int main()
{
	//�������� �������, ������� ��������� ��� ��������� : 
	//��������� ������� � ���������� �������, � ��������� ������� ����� �� ������ ���������� ������
	setlocale(LC_ALL, "RUS");
	int num, exp;

	cout << "����i�� ����� ";
	cin >> num;
	cout << "����i�� ����i�� ";
	cin >> exp;
	cout << num << " � ������i " << exp << " ���i���� " << Exponent(num, exp) << endl;

	system("pause");
	return 0;
}