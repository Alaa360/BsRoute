#pragma once
#include <iostream>
#include <string.h>


using namespace std;

class Person
{
protected:
    string name;
    string password;
public:
    Person() {
        name = "";
        password = "";
    }
    Person(string name, string password) {
        this->name = name;
        this->password = password;
    }
    ~Person() {}

    void setName(string name) {
        this->name = name;
    }
    void setPassword(string password) {
        this->password = password;
    }
    string getName(){
        return this->name;
    }
    string getPassword(){
        return this->password;
    }
};

