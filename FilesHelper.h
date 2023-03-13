#pragma once
#include<iostream>
#include<fstream>
#include <sstream>
#include<vector>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#include"Parser.h"



class FilesHelper{
public:
	static void saveLast(string fileName, int id);
	static int getLast(string fileName);

	// Persons files will be comma separated -- Info provided for parsing

	static void saveClient(Client c);
	static void saveEmployee(string fileName, string lastIdFile, Employee e);
    
	static void getClients();
	static void getEmployees();
	static void getAdmins();

	static void clearFile(string fileName, string lastIdFile);
};