#include <iostream>
#include <string.h>
#include <Client.h>
#include <vector>

using namespace std;

class DataSourceInterface{
    Client c;
    Employee e;
    Admin a;
public:
    virtual void addClient(Client c)=0;
    virtual void addEmployee(Employee e)=0;
    virtual void addAdmin(Admin a);
    virtual void vector<Client> getAllClients()=0;
    virtual void vector<Employee> getAllEmployees()=0;
    virtual void vector<Admin> getAllAdmins()=0;
    virtual void vector<Client> removeAllClients()=0;
    virtual void vector<Employee> removeAllEmployees()=0;
    virtual void vector<Admin> removeAllAdmins()=0;
};