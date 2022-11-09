#include<iostream>
#include<string>
using namespace std;

extern void menu();
extern void show_menu();

extern wstring** enter_nameuniver();
extern wstring** enter_faculty();
extern wstring** enter_specialty();

extern char** enter_years();
extern char** enter_course();
extern char** enter_yourage();

int startupAuthoriz(int argsC,
    char* argsV[])

{
    int passwordLength = 0;
    for (int argumentIndex = 1;
        argumentIndex < argsC;
        argumentIndex++)
    {
        const char* argK = argsV[argumentIndex];
        const char* argV = argsV[argumentIndex + 1];
        if (strcmp(argK, "-nameuniver") == 0)
        {
            std::cout << "Ви авторизувались як\t" << argV << endl;
        }
        else
        {
            if (strcmp(argK, "-years") == 0)
            {
                passwordLength = strlen(argV);
                break;
            }
        }
    }



    return passwordLength;
}

//Тема: навчальний заклад
//При наявності помилок, будь ласка, сповістіть мене

int main(int argsC,
    char* argsV[],
    char* environmentParameters[]
)
{

    setlocale(LC_ALL, "");

    if (argsC > 1)
    {
        return startupAuthoriz(argsC, argsV);
    }
    else
    {
        menu();
    }

    cin.get();
    return 0;
}

#ifndef INPUT_MAIN_SAMPLE_H
#define INPUT_MAIN_SAMPLE_H

void show_menu()
{

    wcout << L"Оберiть пункт меню:" << endl;
    wcout << L"1. Ввести назву закладу та дату створення" << endl;
    wcout << L"2. Ввести факультет та спецiальнiсть" << endl;
    wcout << L"3. Ввести номер курсу та свiй вiк" << endl;
    wcout << L"4. Завершити роботу" << endl;
}
wstring** enter_nameuniver()
{
    wstring* nameuniver = new wstring();
    wcout << L"Ввести назву закладу:" << endl;
    wcin.ignore();
    getline(wcin, *nameuniver);

    return &nameuniver;
}
wstring** enter_faculty()
{
    wstring* faculty = new wstring();
    wcout << L"Ввести факультет:" << endl;
    wcin.ignore();
    getline(wcin, *faculty);

    return &faculty;
}
wstring** enter_specialty()
{
    wstring* specialty = new wstring();
    wcout << L"Ввести спецiальнiсть:" << endl;
    wcin.ignore();
    getline(wcin, *specialty);

    return &specialty;
}
char** enter_years()
{
    const short int MAX_PASSWORD_LENGTH = 5;
    char* years = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Ввести дату створення:" << endl;
    cin >> years;
    return &years;
}
char** enter_course()
{
    const short int MAX_PASSWORD_LENGTH = 2;
    char* course = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Ввести номер курсу:" << endl;
    cin >> course;
    return &course;
}
char** enter_yourage()
{
    const short int MAX_PASSWORD_LENGTH = 4;
    char* yourage = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Ввести свiй вiк:" << endl;
    cin >> yourage;
    return &yourage;
}
void menu()
{
    short int selectedMenuItem = 1;
    wstring nameuniver = L"";
    wstring specialty = L"";
    wstring faculty = L"";
    char* years = nullptr;
    char* course = nullptr;
    char* yourage = nullptr;
    show_menu();
    cin >> selectedMenuItem;
    switch (selectedMenuItem)
    {
    case 1:
        nameuniver = **enter_nameuniver();
        years = *enter_years();
        faculty = **enter_faculty();
        specialty = **enter_specialty();
        course = *enter_course();
        yourage = *enter_yourage();
        break;
    case 2:
        nameuniver = **enter_nameuniver();
        years = *enter_years();
    case 3:
        faculty = **enter_faculty();
        specialty = **enter_specialty();
        break;
    case 4:
        course = *enter_course();
        yourage = *enter_yourage();
        break;
    case 5:
    default:

        exit(0);
    }
    if (!nameuniver.empty())
    {
        wcout << L"Назва навчального закладу:\t" << nameuniver << endl;
    }
    if (!faculty.empty())
    {
        wcout << L"Назва факультету:\t" << faculty << endl;
    }
    if (!specialty.empty())
    {
        wcout << L"Назва спецiальностi:\t" << specialty << endl;
    }
    if (years!= nullptr)
    {


        wcout << L"Дата створенняя унiверситету:\t"
            << years << endl;
        delete[] years;
    }
    if (course!= nullptr)
    {


        wcout << L"Номер курсу:\t"
            << course << endl;
        delete[] course;
    }
    if (yourage!= nullptr)
    {


        wcout << L"Твiй вiк:\t"
            << yourage << endl;
        delete[] yourage;
    }
}
#endif