#pragma once
#include"Employee.h"

//Admin Class inherited everything from Class Employee

class Admin : public Employee {
public:
	Admin() {}
	Admin(int id, string name, string password, double salary) : Employee(id, name, password, salary) {}
	// Setters

	void display() {
		Employee::display();
	}
};



