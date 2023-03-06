#pragma once
#include"Employee.h"
#include"IDGenerator.h"

//Admin Class inherited everything from Class Employee

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

	int getID() {
		return this->id;
	}
	void display() {
		Employee::display();
	}
};

IDGenerator Admin::idGenerator(2000);


