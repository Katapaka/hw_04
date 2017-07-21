#include <iostream>
using namespace std;

void roundingFunc(double _num, int _round)
{

}

int main()
{
    //Написать функцию для округления заданного числа с заданной точностью.
    setlocale(LC_ALL,"RUS");
    double num;
    int round;

    cout<<"Enter number:";
    cin >> num;
    cout<< "Round acuracy:";
    cin >> round;

    roundingFunc(num,round);

    return 0;
}
