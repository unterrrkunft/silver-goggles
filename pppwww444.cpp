#include <iostream>
#include <string>

extern void Check_user();

using namespace std;

struct Acc_Sys {
    string welcome;
    int ID;
    int number;
    int time;
};

struct User_Accsys
{
    void Check_user(string User_password, string User_login)
    {
        string login = "unterrrkunft";
        string password = "09022001";

        cout << "Enter login: ";
        cin >> User_login;

        cout << "Enter password: ";
        cin >> User_password;

        if (User_login == login && User_password == password)
        {
            cout << "You're welcome! /(°~°)/" << endl;
        }
        else
        {
            cout << "Error /(°т°)/" << endl;

            exit(0);
        }
    };
};

struct Phone_Number
{
    string phone_number;
};

int main()
{
    Acc_Sys as;
    as.welcome = "Welcome";
    as.ID = 716803474;
    as.number = 2206;
    as.time = 6;
    cout << as.welcome << endl;
    cout << "ID: " << as.ID << endl;
    cout << "Number: " << as.number << endl;
    cout << "Time: " << as.time << endl;

    User_Accsys ua;
    string login;
    string password;
    ua.Check_user(login, password);

    Phone_Number pn;
    pn.phone_number;

    cout << "Enter Phone Numder: ";
    cin >> pn.phone_number;

    system("pause");
    return 0;
}