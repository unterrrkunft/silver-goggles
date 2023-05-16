#include <iostream>
#include <string>
#include "Authorrrization.h"
#include "Static.h"
#include "Logggin.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    Logggin::Client_logggin cl;
    Logggin::Verficated vr;
    Static::ST st;

    vr.setPhone(21971);

    cout << "Sign in" << endl;

    Authorrrization::Client Userfirst("unterrrkunft", "usereldo452@gmail.com", 18, "Настюшка", 220605, "Головний бос цiєї качалки", 78321);
    Userfirst.Output();
    cout << " Id: " << Userfirst.getid() << endl;

    cout << endl;

    cout << "Log in" << endl;
    cout << " Логiн: " << cl.getLogggin() << endl;
    cout << " Пароль: " << cl.getPasssword() << endl;
    cout << " Номер телефону: " << vr.getPhone() << endl;
    cout << " Код з SMS: " << cl.getSMScode() << endl;
    cout << endl;
    cout << endl;
    cout << "Other info" << endl;

    cout << " Стабiльнiсть сервера: " << st.ST::stable << endl;
    cout << " Код скидання: " << st.ST::codereboot << endl;
    return 0;
}