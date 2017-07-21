#include <iostream>

using namespace std;

void lucky(int _num)
{
    int tmp = _num;
    int numArr[6];
    for(int i=0;i<6;i++) // поміщаємо кожну з 6 цифр у масив
    {
        numArr[i] = tmp%10;
        tmp/=10;
    }
    if((numArr[0]+numArr[1]+numArr[2]) == (numArr[3]+numArr[4]+numArr[5])) //порівнюємо першу і другу половину числа
        cout<<"Вiтаю! Це щасливе число\n";
    else
        cout<< _num << " не є щасливим числом\n";
}

int main()
{
    //Написать функцию, которая определяет, является ли «счастливым» шестизначное число
    setlocale(LC_ALL,"RUS");
    int num;
    cout << "Введiть шестизначне число ";
    cin >> num;
    if(num < 100000 || num>999999)
    {
        cout<<"Число повинно бути шестизначним!\n";
        return 1;
    }
    lucky(num);

    return 0;
}
