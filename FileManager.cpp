#include <string.h>
#include <FileManager.h>
#include "Parser.cpp"


using namespace std;

static void FileManager::addClient(Client c){
    file.open("Clients.txt",ios::app);

	file << c.getID() << ',' << c.getName() << ',' << c.getPassword() << ',' << c.getBalance() << "\n";
	file.close();

    system("pause");
}

static void FileManager::addEmployee(Employee e){
    file.open("Employee.txt",ios::app);
	
	file << e.getID() << ',' << e.getName() << ',' << e.getPassword() << ',' << e.getBalance() << "\n";
	file.close();
	    
    system("pause");
}

static void FileManager::addAdmin(Admin a){
    file.open("Admin.txt",ios::app);
	
	file << a.getID() << ',' << a.getName() << ',' << a.getPassword() << ',' << a.getBalance() << "\n";
	file.close();
	    
    system("pause");
}

vector<Client> FileManager::getAllClients(){	
	file.open("Clients.txt", ios::out);
	string line;
	while (getline(file, line)) {
		Client person = Parser::parseToClient(line);
		allClients.push_back(person);
	}
}

vector<Employee> FileManager::getAllEmployees(){	
	file.open("Employee.txt");
	string line;
	while (getline(file, line)) {
		Employee person = Parser::parseToEmployee(line);
		allEmployees.push_back(person);
	}
}

vector<Admin> FileManager::getAllAdmins(){	
	file.open("Admin.txt");
	string line;
	while (getline(file, line)) {
		Admin person = Parser::parseToEmployee(line);
		allAdmins.push_back(person);
	}
}

void FileManager::removeAllClients(){    
	file.open("Clients.txt", ios::out | ios::trunc);
	file.close();
}

void FileManager::removeAllEmployees(){    
	file.open("Employees.txt", ios::out | ios::trunc);
	file.close();
}

void FileManager::removeAllAdmins(){    
	file.open("Admins.txt", ios::out | ios::trunc);
	file.close();
}