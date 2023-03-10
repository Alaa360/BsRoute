#pragma once
#include<iostream>
#include<fstream>
#include <sstream>
#include<vector>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#include"Parser.h"

using namespace std;

class FilesHelper{
public:
	static void saveLast(string fileName, int id) {
		fstream saveId(fileName, ios::app);
		saveId << id;
		saveId.close();
		
	}
	static int getLast(string fileName) {
		ifstream lastId(fileName);
		int id;
		lastId >> id;
		lastId.close();
		return id;
	}

	// Persons files will be comma separated -- Info provided for parsing

	static void saveClient(Client c) {
		fstream clientFile("clients.txt", ios::app);
		int id = getLast("saveClientLastId.txt") + 1;
		clientFile << id << ',' << c.getName() << ',' << c.getPassword() << ',' << c.getBalance() << "\n";
		clientFile.close();
		saveLast("saveClientLastId.txt", id);
	}

	static void saveEmployee(string fileName, string lastIdFile, Employee e) {
		fstream employeeFile(fileName, ios::app);
		int id = getLast(lastIdFile) + 1;
		employeeFile << id << ',' << e.getName() << ',' << e.getPassword() << ',' << e.getSalary() << "\n";
		employeeFile.close();
		saveLast(lastIdFile, id);
	}


	static void getClients(){
		ifstream file;
		file.open("clients.txt");
		string line;
		while (getline(file, line)) {
			Client person = Parser::parseToClient(line);
			allClients.push_back(person);
		}
	}

	static void getEmployees() {
		ifstream file;
		file.open("employees.txt");
		string line;
		while (getline(file, line)) {
			Employee person = Parser::parseToEmployee(line);
			allEmployees.push_back(person);
		}
	}
	static void getAdmins() {
		ifstream file;
		file.open("admins.txt");
		string line;
		while (getline(file, line)) {
			Admin person = Parser::parseToAdmin(line);
			allAdmins.push_back(person);
		}
	}

	static void clearFile(string fileName, string lastIdFile) {
		fstream file(fileName, ios::in | ios::out);
		string line;
		while (getline(file, line)) {
			if (line[0] = stoi(lastIdFile)) {
				line.clear();
			}
		}
		file.close();
	}
};

static vector<Client> allClients;
static vector<Employee> allEmployees;
static vector<Admin> allAdmins;



