#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Logggin {
    class Client_logggin
    {
    public:

        string getLogggin() {
            return Logggin;
        }

        int getPasssword() {
            return Passsword;
        }

        int getSMScode() {
            return SMScode;
        }

        bool getPermit() {
            return Permit;
        }

    private:
        string Logggin = "unterrrkunft";
        int Passsword = 220605;
        int SMScode = 3012;
        bool Permit = true;

    };

    union Verficated
    {
    public:
        void setPhone(int Phone) {
            this->Phone = Phone;
        }

        int getPhone() {
            return Phone;
        }

    private:
        int Phone;
    };

    // struct Other
    // {
    // public:
    //     void setstable(int stable) {
    //         this->stable = stable;
    //     }

    //     int getstable() {
            // return stable;
   //      }

   //  private:
    //     static int stable;
   //  };
}