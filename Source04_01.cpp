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
	//�������� �������, ������� ��������� ��� ��������� : 
	//��������� ������� � ���������� �������, � ��������� ������� ����� �� ������ ���������� ������
	setlocale(LC_ALL, "RUS");
	int num, exp;

	cout << "������ ����� ";
	cin >> num;
	cout << "������ ������ ";
	cin >> exp;
	cout << num << " � " << exp << " ������ ������� " << Exponent(num, exp) << endl;

	system("pause");
	return 0;
}