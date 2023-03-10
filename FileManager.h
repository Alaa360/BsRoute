#include <fstream>
#include "Person.h"
#include <DataSourceInterface.h>


class FileManager{
    fstream file;
    vector<Client> allClients;
    vector<Employee> allEmployees;
    vector<Admin> allAdmins;
public:
    void addClient(Client c);
    void addEmployee(Employee e);
    void addAdmin(Admin a);
    vector<Client> getAllClients();
    vector<Employee> getAllEmployees();
    vector<Admin> getAllAdmins();
    void removeAllClients();
    void removeAllEmployees();
    void removeAllAdmins();    
};