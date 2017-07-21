#include <iostream>
#include<math.h> //використаємо функцiю round()

using namespace std;

void roundingFunc(double _num, int _round)
{
    int tmp = 1;
    for(;_round>0; _round--)
        tmp*=10;
    double result = round(_num*tmp)/tmp;
    cout <<"Ваше нове число " << result << endl;
}

int main()
{
    //Написать функцию для округления заданного числа с заданной точностью
    setlocale(LC_ALL,"RUS");

    double num;
    int round;
    cout<<"Введiть дробове число ";
    cin>>num;
    cout<<"Введiть кiлькiсть знакiв пiсля коми ";
    cin>>round;
    roundingFunc(num,round);

    return 0;
}
