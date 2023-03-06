#pragma once
#include"Person.h"
#include"IDGenerator.h"


//Employee Class inherited everything from CLass Person
// Employee Unique Variable is Salary

class Employee : public Person{
private:
	int id;
	double salary;
	static IDGenerator idGenerator;
public:
	Employee(){
		salary = 0.0;
		id = idGenerator.getNextID();
	}
	Employee(string name, string password, double salary) : Person(name, password) {
		this->salary = salary;
	}
	
	// Setters

	void setSalary(double salary) {
		this->salary = salary;
	}

	double getSalary() {
		return this->salary;
	}

	int getID() {
		return this->id;
	}

	void display() {
		cout << "Employee ID: " << getID() << endl;
		cout << "Employee Name: " << getName() << endl;
		cout << "Employee Salary: " << getSalary() << endl;
	}
};

IDGenerator Employee::idGenerator(1000);
