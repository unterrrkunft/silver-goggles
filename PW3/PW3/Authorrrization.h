#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Authorrrization {
    enum Gender {
        Woman,
        Man,
        Special
    };

    class Client {
    public:
        string nickname;
        string email;
        int age;
        static int client_count;

        Client(string nickname, string email, int age, string name,
            int password, string part, int secret_code)
        {
            this->nickname = nickname;
            this->email = email;
            this->age = age;
            this->name = name;
            this->password = password;
            this->part = part;
            this->secret_code = secret_code;
            client_count++;
            id = client_count;
        }

        int getid() {
            return id;
        }

        void Output() {
            cout << " Коротке iм'я: " << nickname << "\n Пошта: " << email << "\n Вiк: " << age << endl;
            Outputp();
        }

        void setnickname(string nickname) {
            this->nickname = nickname;
        }

        void setemail(string email) {
            this->email = email;
        }

        void setage(int age) {
            this->age = age;
        }

        void setname(string name) {
            this->name = name;
        }

        void setsecretcode(int secret_code) {
            this->secret_code = secret_code;
        }

        string getnickname() {
            return nickname;
        }

        string getemail() {
            return email;
        }

        int getage() {
            return age;
        }

        int getpassword() {
            return password;
        }

        string getpart() {
            return part;
        }

        int getsecret_code() {
            return secret_code;
        }

    private:
        void Outputp() {
            cout << " Iм'я: " << name << "\n Пароль: " << password << "\n Роль: " << part << "\n Секретний код: " << secret_code << endl;
        }
        int id;
        string name;
        int password;
        string part;
        int secret_code;

    };

    int Client::client_count = 0;
}