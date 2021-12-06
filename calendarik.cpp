//#include "stdafx.h"
#include <iostream>

using namespace std;

int leap, februaryDays, indexDay, indexWeek, month, offset, counterDayOfWeek {};

void january() {

    cout << "                     Январь" << endl << "__________________________________________________" << endl
         << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    for (indexDay = 1; indexDay < offset; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= 31; indexDay++) {

        cout << indexDay << "\t";
        if ((offset + indexDay) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }
}

void allMonth(bool leap, int offset) {

    cout << "                     Январь" << endl << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    for (indexDay = 1; indexDay < offset; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= 31; indexDay++) {

        cout << indexDay << "\t";
        if ((offset + indexDay) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    if (!leap)
        februaryDays = 28;
    else
        februaryDays = 29;

    cout << "\n" << endl
         << "                     Февраль" << endl
         << "__________________________________________________" << endl
         << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= februaryDays; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Март" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 31;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Апрель" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 30;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Май" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 31;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Июнь" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 30;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Июль" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 31;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Август" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 31;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Сентябрь" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 30;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Октябрь" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 31;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Ноябрь" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 30;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }

    cout << "\n" << endl
        << "                     Декабрь" << endl
        << "__________________________________________________" << endl
        << "Пн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;

    month = 31;
    for (indexDay = 1; indexDay < counterDayOfWeek; indexDay++)

        cout << "\t";
    for (indexDay = 1; indexDay <= month; indexDay++) {

        cout << indexDay << "\t";
        if ((counterDayOfWeek + 1) % 7 == 1) {

            counterDayOfWeek = 0;
            cout << endl;
        }

        counterDayOfWeek++;
    }
}

bool leapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}

int firstDay(int year)
{
    const int first = 1950;   //1990
    int week[] = { 1, 2, 3, 4, 5, 6, 7 };
    int day = 0;

    day = year - first;
    for (int i = first; i < year; ++i)
    {
        if (leapYear(i))
            ++day;
    }

    day %= 7;

    return day;
}

int main () {

    int year;

    system ("chcp 1251");

    cout << "Введите год: ";
    cin >> year;
    cout << endl;

    allMonth (leapYear (year), firstDay (year));

    return 0;
}