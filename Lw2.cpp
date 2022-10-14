#include <iostream>

using namespace std;

int main()
{
    // Назва ноутбука
    string compName = "Lenovo IdeaPad3 15ALC6";
    // Номер моделі (6 цифр)
    unsigned int ModelID = 151736;
    // Сирійний код (4 цифри)
    unsigned short int versionCode = 1536;
    // Вік ноутбука
    unsigned short int copmYears = 0.1;
    // Працює?
    bool working = true;
    // Відеокарта
    string videographic = "AMD Radeon Vega 7";
    // Процесор
    string CPU = "AMD Ryzen 5 5500U";
    // ОЗУ
    string OperativeMemory = "8GB";
    // SDD
    string SSD = "255 GB";
    // Повна назва (секретний код)
    int compFullName = ModelID + versionCode;

    unsigned int totalMemoryInBytes =

        sizeof(compFullName) +
        sizeof(compName) +
        sizeof(copmYears) +
        sizeof(working) +
        sizeof(videographic) +
        sizeof(CPU) +
        sizeof(OperativeMemory) +
        sizeof(SSD);

    cout << "Повна назва компютера:\t" << compFullName << endl;
    cout << "Назва компютера:\t\t" << compName << endl;
    cout << "Вік компютера:\t\t\t" << copmYears << endl;
    cout << "Працює:\t\t\t\t\t" << ((working) ? "Так" : "Ні") << endl;
    cout << "Відеокарта:\t\t\t\t" << videographic << endl;
    cout << "Процесор:\t\t\t\t" << CPU << endl;
    cout << "ОЗУ:\t\t\t\t\t" << OperativeMemory << endl;
    cout << "SDD:\t\t\t\t\t" << SSD << endl;
    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

        totalMemoryInBytes << endl;
}