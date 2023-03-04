#pragma once
#include"Employee.h"
#include "Validation.h"
#include"IDGenerator.h"
#include<fstream>

class Admin : public Employee {
private:
	int id;
	static IDGenerator idGenerator;
public:
	Admin() {
		id = idGenerator.getNextID();
	}
	Admin(string name, string password, double salary) : Employee(name, password, salary) {}
	// Setters
	void setName() {
		Employee::setName();
	}
	void setPassword() {
		Employee::setPassword();
	}
	int getID() {
		return this->id;
	}
	void display() {
		Employee::display();
	}

};

IDGenerator Admin::idGenerator(2000);


