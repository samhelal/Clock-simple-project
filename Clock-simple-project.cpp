#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    int hours = 0, min = 0, sec = 0;

    cout << " Enter hours " << endl;
    cin >> hours;

    cout << " Enter min " << endl;
    cin >> min;

    cout << " Enter sec " << endl;
    cin >> sec;
    int x = 0;
    while (true)
    {
        system("cls");

        if (sec <= 59)
        {
            sec++;
        }
        if (sec > 59)
        {
            min++;
            sec = 0;
        }

        if (min > 59)
        {
            hours++;
            min = 0;
        }

        if (hours > 23)
        {
            hours = 0;
        }
        cout << hours << ":" << min << ":" << sec << endl;
        Sleep(900);
    }
}