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
        cout <<  ( to_string (hours).size() == 1 ? "0" : "") << hours << " : " <<   //to add (0) before single number we change 
                 ( to_string (min).size() == 1 ? "0" : "" ) << min << " : " <<   //the type first from int to string then use the  
                 ( to_string (sec).size() == 1 ? "0" : ""  ) << sec << endl;  // size function to can count ( hh : mm : ss )
        Sleep(900);
    }
}
