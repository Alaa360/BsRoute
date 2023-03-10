#pragma once
#include"Person.h"


//Employee Class inherited everything from CLass Person
// Employee Unique Variable is Salary

class Employee : public Person{
private:
	double salary;
public:
	Employee(){
		salary = 0.0;
	}
	Employee(int id, string name, string password, double salary) : Person(id, name, password) {
		this->salary = salary;
	}
	
	// Setters
	void setSalary(double salary) {
		this->salary = salary;
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

