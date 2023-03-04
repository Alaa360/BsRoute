#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include<string>
#include <limits>

//#include "validation.h"

using namespace std;

class Validation {
public:
    static bool checkName(string name) {
        if (name.length() < 5 || name.length() > 20) {
            return false;
        }
        for (char c : name) {
            if (!isalpha(c) && !isspace(c)) {
                return false;
            }
        }
        return true;
    }
    static bool checkPassword(string password) {
        if (password.length() < 8 || password.length() > 20) {
            return false;
        }
        return true;
    }

    static string insertName() {
        string name;
        cout << "Insert your First and Last Name: ";
        getline(cin, name);
        while (!checkName(name)) {
            system("clear");
            cout << "Error, Insert name not less than 5 and not greater than 20 characters \n";
            cout << "Insert your First and Last Name: ";
            getline(cin, name);
        }
        return name;
    }
    static string insertPassword() {
        string password;
        cout << "Insert your password: ";
        cin >> password;
        while (!checkPassword(password)) {
            system("clear");
            cout << "Error, Password length not less than 8 and not greater than 20 \n";
            cout << "Insert your password: ";
            cin >> password;
        }
        return password;
    }

    static double insertBalance() {
        double balance;
        cout << "Insert Balance: ";
        cin >> balance;
        while (cin.fail() || balance < 1500) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("clear");
            cout << "Error, Balance not less than 1500 \n";
            cout << "Insert Balance: ";
            cin >> balance;
        }
        return balance;
    }

    static double insertSalary() {
        double salary;
        cout << "Insert Salary: ";
        cin >> salary;
        while (cin.fail() || salary < 5000) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("clear");
            cout << "Error, Salary not less than 5000 \n";
            cout << "Insert Salary: ";
            cin >> salary;
        }
        return salary;
    }
};
