#pragma once
#include <iostream>
#include <string.h>


using namespace std;

class Person{
protected:
    int id;
    string name;
    string password;
public:
    Person() {
        id = 0;
        name = "";
        password = "";
    }
    Person(int id, string name, string password) {
        this->id = id;
        this->name = name;
        this->password = password;
    }
    ~Person() {}

    void setID(int id) {
        this->id = id;
    }

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
    int getID() {
        return this->id;
    }
};

