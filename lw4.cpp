#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //4
    int x;
    int y;

    cout << "Введiть число x: ";
    cin >> x;

    cout << "Введiть число y: ";
    cin >> y;

    // індуктивна та дедуктивна

    if ((x + y < 30) && (y > 3)) {
        cout << "Умову виконано" << endl;
    }

    if ((x + y >= 30) && (y <= 3)) {
        cout << "Умову не виконано" << endl;
    }

    if ((x + y < 30) && (y <= 3)) {
        cout << "Умову не виконано" << endl;
    }

    if ((x + y >= 30) && (y > 3)) {
        cout << "Умову не виконано" << endl;
    }
}