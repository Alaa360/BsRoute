#pragma once
#include"Person.h"
#include "Validation.h"
#include"IDGenerator.h"
#include<fstream>

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
	void setName() {
		this->name = Validation::insertName();
	}
	void setPassword() {
		this->password = Validation::insertPassword();
	}
	int getID() {
		return this->id;
	}
	string getName() {
		return this->name;
	}
	string getPassword() {
		return this->password;
	}
	double getSalary() {
		return this->salary;
	}
	void display() {
		cout << "Employee ID: " << getID() << endl;
		cout << "Employee Name: " << getName() << endl;
		cout << "Employee Salary: " << getSalary() << endl;

	}


};

IDGenerator Employee::idGenerator(1000);


