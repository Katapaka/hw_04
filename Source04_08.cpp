#include <iostream>

using namespace std;

//функція отримує дату у форматі ДЕНЬ МІСЯЦЬ РІК і повертає кількість днів що пройшла від 0.0.0р.
int amountOfDay(int _day, int _month, int _year)
{
    int SumOfDay = _year*365 + (_year/4) + _day;
    switch(_month)
    {
    case 12:
        SumOfDay+=30; //якщо місяць грудень додаємо усі дні листопада
    case 11:
        SumOfDay+=31; //додаємо жовтень
    case 10:
        SumOfDay+=30; //додаємо вересень
    case 9:
        SumOfDay+=31; //додаємо серень
    case 8:
        SumOfDay+=31; //додаємо липень
    case 7:
        SumOfDay+=30; //додаємо червень
    case 6:
        SumOfDay+=31; //додаємо травень
    case 5:
        SumOfDay+=30; //додаємо квітень
    case 4:
        SumOfDay+=31; //додаємо березень
    case 3:
        SumOfDay+=28; //додаємо лютий(28 днів)
    case 2:
        SumOfDay+=31; //додаємо  //додаємо січень
    case 1: break;
    }
    if (!(_year%4) && (_month<3))
        SumOfDay--;
    cout << "Debug: SumOfDay: " << SumOfDay << endl;
    return SumOfDay;
}

//Функція отримує дві дати. Почергово для кожної дати
//викликає функцію яка повертає кількість днів
//і обчислює різницю
void dateFunc(int _fDay, int _fMonth, int _fYear, int _sDay, int _sMonth, int _sYear)
{
    int firstSumOfDay = amountOfDay(_fDay,_fMonth,_fYear);
    int secondSumOfDay = amountOfDay(_sDay,_sMonth,_sYear);
    cout<<"Різниці в днях: " << secondSumOfDay - firstSumOfDay << endl;
}

int main()
{
    //Написать функцию, которая принимает две даты
    //(т.е. функция принимает шесть параметров)
    //и вычисляет разность в днях между этими датами.
    //Для решения этой задачи необходимо также написать функцию,
    //которая определяет, является ли год високосным
    setlocale(LC_ALL,"RUS");
    int fDay,fMonth,fYear,sDay,sMonth,sYear;
    cout<<"Введыть першу дату(ДД ММ РРРР) ";
    cin >> fDay >> fMonth >> fYear;
    cout<< "Ввеіть другу  дату(ДД ММ РРРР) ";
    cin >> sDay >> sMonth >> sYear;
    dateFunc(fDay,fMonth,fYear,sDay,sMonth,sYear);

    return 0;
}
