#include <iostream>
#include <string>
#include "Person.h"

class Client : public Person
{
private:
    double balance;

public:
    Client();
    Client(int id, string name, string password, double balance);
    ~Client();
    void setName(string name);
    void setPassword(string password);
    void setBalance(double balance);
    string getName();
    double getBalance();
    void deposit(double amount);
    void withdraw(double amount);
    void transferTo(double amount, Client &recipient);
    void checkBalance();
    void display();
};
