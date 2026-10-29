#include<iostream>
#include<string>
using namespace std;

class employee
{
    string name;
    int eid;
    int salary;
public :

void display();};

    void employee :: display()

{   
    cout << "Enter employee name" << endl;
    cin >> name; // Fixed: Removed ">> endl"
    
    cout << "Enter employee id" << endl;
    cin >> eid; // Fixed: Removed ">> endl"
    
    cout << "Enter employee salary" << endl;
    cin >> salary; // Fixed: Removed ">> endl"
    
    cout << "Name of the employee is:-" << name << endl;
    cout << "employee i'd is :-" << eid << endl;
    cout << "Salary of the employee is:-" << salary << endl;
}


int main()
{
    employee e1;
    e1.display(); // Fixed: Added missing semicolon
    return 0; 
} 
