#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#include <sstream>
using namespace std;

class Parser{
public:
	static vector<string> split(string line) {
		vector<string> items;
		stringstream stream(line);
		string item;
		while (getline(stream,item,',')) {
			items.push_back(item);
		}
		return items;
	}
	static Client parseToClient(string line) {
		vector<string> data;
		data = split(line);
		Client personData;
		personData.setID(stoi(data[0]));
		personData.setName(data[1]);
		personData.setPassword(data[2]);
		personData.setBalance(stod(data[3]));
		return personData;
	}
	static Employee parseToEmployee(string line) {
		vector<string> data;
		data = split(line);
		Employee personData;
		personData.setID(stoi(data[0]));
		personData.setName(data[1]);
		personData.setPassword(data[2]);
		personData.setSalary(stod(data[3]));
		return personData;
	}
	static Admin parseToAdmin(string line) {
		vector<string> data;
		data = split(line);
		Admin personData;
		personData.setID(stoi(data[0]));
		personData.setName(data[1]);
		personData.setPassword(data[2]);
		personData.setSalary(stod(data[3]));
		return personData;
	}
};

