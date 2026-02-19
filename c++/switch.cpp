#include <iostream>
int main()
{
    using namespace std;
    int day = 4;

    switch (day)
    {
    case 1:
        cout << " Mondday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        break;
    }
}