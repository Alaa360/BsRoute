#include "Client.h"

Client::Client()
{
    balance = 0;
}

Client::Client(int id, string name, string password, double balance) : Person(id, name, password)
{
    this->balance = balance;
}

void Client::setName(string name)
{
    if (!Validation::checkName(name))
    {
        return;
    }
    this->name = name;
}

void Client::setPassword(string password)
{
    if (!Validation::checkPassword(password))
    {
        return;
    }
    this->password = password;
}

void Client::setBalance(double balance)
{
    if (balance < 1500)
    {
        cout << "min Balance is 1500 , current Balance is :" << getBalance() << endl;
    }
    else
    {
        this->balance = balance;
    }
}

string Client::getName()
{
    return Person::name;
}

double Client::getBalance()
{
    return balance;
}

void Client::deposit(double amount)
{
    setBalance(getBalance() + amount);
    cout << "Deposit successful. New balance: " << getBalance() << endl;
}

void Client::withdraw(double amount)
{
    if (getBalance() - amount < 1500)
    {
        cout << "Withdrawal failed. Minimum balance is 1500." << endl;
    }
    else
    {
        setBalance(getBalance() - amount);
        cout << "Withdrawal successful. New balance: " << getBalance() << endl;
    }
}

void Client::transferTo(double amount, Client &recipient)
{
    if (getBalance() - amount < 1500)
    {
        cout << "Transfer failed. Minimum balance is 1500." << endl;
    }
    else
    {
        setBalance(getBalance() - amount);
        recipient.setBalance(recipient.getBalance() + amount);
        cout << "Transfer successful. New balance: " << getBalance() << endl;
    }
}

void Client::checkBalance()
{
    cout << "Current Balance= " << getBalance() << endl;
}

void Client::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << getBalance() << endl;
}
