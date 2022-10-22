#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    // Назва навчального закладу
    string eduName = "НПУ iм. Драгоманова";
    // Дата заснування
    unsigned short int eduFound = 1834;
    // Вiк закладу
    unsigned short int eduYears = 188;
    // Працює?
    bool working = true;
    // Девiз
    string eduMotto = "Liber - a central figura";
    // Кiлькість студентiв
    unsigned int studNum = 20000;
    // Кiлькість факултетiв
    unsigned int eduFacults = 20;
    // Ректор
    string eduRector = "Андрущенко Вiктор Петрович";
    // Декан
    string eduDean = "Працьовитий Микола Вiкторович";

    unsigned int totalMemoryInBytes =

        sizeof(eduName) +
        sizeof(eduFound) +
        sizeof(eduYears) +
        sizeof(working) +
        sizeof(eduMotto) +
        sizeof(studNum) +
        sizeof(eduFacults) +
        sizeof(eduRector) +
        sizeof(eduDean);

    cout << "Назва навчального закладу:\t\t" << eduName << endl;
    cout << "Дата заснування:\t\t\t" << eduFound << endl;
    cout << "Вiк закладу:\t\t\t" << eduYears << endl;
    cout << "Працює:\t\t\t\t\t" << ((working) ? "Так" : "Ні") << endl;
    cout << "Девiз:\t\t\t\t" << eduMotto << endl;
    cout << "Кiлькiсть студентiв:\t\t\t\t" << studNum << endl;
    cout << "Кiлькiсть факультетiв:\t\t\t\t" << eduFacults << endl;
    cout << "Ректор:\t\t\t\t\t" << eduRector << endl;
    cout << "Декан:\t\t\t\t\t" << eduDean << endl;
}