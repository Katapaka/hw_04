#include <iostream>
#include<math.h> //����������� �����i� round()

using namespace std;

void roundingFunc(double _num, int _round)
{
    int tmp = 1;
    for(;_round>0; _round--)
        tmp*=10;
    double result = round(_num*tmp)/tmp;
    cout <<"���� ���� ����� " << result << endl;
}

int main()
{
    //�������� ������� ��� ���������� ��������� ����� � �������� ���������
    setlocale(LC_ALL,"RUS");

    double num;
    int round;
    cout<<"����i�� ������� ����� ";
    cin>>num;
    cout<<"����i�� �i���i��� ����i� �i��� ���� ";
    cin>>round;
    roundingFunc(num,round);

    return 0;
}
