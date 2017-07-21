#include <iostream>

using namespace std;

int amountOfDay(int _day, int _month, int _year)
{
    int SumOfDay = _year*365 + (_year/4) + _day;
    switch(_month)
    {
    case 12:
        SumOfDay+=30; //���� ����� ������� ������ �� �� ���������
    case 11:
        SumOfDay+=31; //������ �������
    case 10:
        SumOfDay+=30; //������ ��������
    case 9:
        SumOfDay+=31; //������ ������
    case 8:
        SumOfDay+=30; //������ ������
    case 7:
        SumOfDay+=31; //������ �������
    case 6:
        SumOfDay+=30; //������ �������
    case 5:
        SumOfDay+=31; //������ ������
    case 4:
        SumOfDay+=31; //������ ��������
    case 3:
        SumOfDay+=31; //������ �����(28 ���)
    case 2:
        SumOfDay+=31; //������  //������ �����
    case 1: break;
    }
    return SumOfDay;
}


void dateFunc(int _fDay, int _fMonth, int _fYear, int _sDay, int _sMonth, int _sYear)
{
    int firstSumOfDay = amountOfDay(_fDay,_fMonth,_fYear);
    int secondSumOfDay = amountOfDay(_sDay,_sMonth,_sYear);
    cout<<"г����� � ����: " << secondSumOfDay - firstSumOfDay << endl;
}

int main()
{
    //�������� �������, ������� ��������� ��� ����
    //(�.�. ������� ��������� ����� ����������)
    //� ��������� �������� � ���� ����� ����� ������.
    //��� ������� ���� ������ ���������� ����� �������� �������,
    //������� ����������, �������� �� ��� ����������
    setlocale(LC_ALL,"RUS");
    int fDay,fMonth,fYear,sDay,sMonth,sYear;
    cout<<"������� ����� ����(�� �� ����) ";
    cin >> fDay >> fMonth >> fYear;
    cout<< "����� �����  ����(�� �� ����) ";
    cin >> sDay >> sMonth >> sYear;
    dateFunc(fDay,fMonth,fYear,sDay,sMonth,sYear);

    return 0;
}
