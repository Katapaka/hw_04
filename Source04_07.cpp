#include <iostream>

using namespace std;

void lucky(int _num)
{
    int tmp = _num;
    int numArr[6];
    for(int i=0;i<6;i++) // ������� ����� � 6 ���� � �����
    {
        numArr[i] = tmp%10;
        tmp/=10;
    }
    if((numArr[0]+numArr[1]+numArr[2]) == (numArr[3]+numArr[4]+numArr[5])) //��������� ����� � ����� �������� �����
        cout<<"�i���! �� ������� �����\n";
    else
        cout<< _num << " �� � �������� ������\n";
}

int main()
{
    //�������� �������, ������� ����������, �������� �� ����������� ������������ �����
    setlocale(LC_ALL,"RUS");
    int num;
    cout << "����i�� ����������� ����� ";
    cin >> num;
    if(num < 100000 || num>999999)
    {
        cout<<"����� ������� ���� ������������!\n";
        return 1;
    }
    lucky(num);

    return 0;
}
