#include<iostream>
#include<string>
using namespace std;

class employee
{int salary , eid ;
string name ;
public : 
employee(int x,int y,string z)
{salary = x;
eid = y;
name = z;}

void display ()
{cout << salary << endl;
 cout << eid << endl;
 cout << name << endl;}
};

int main(){
employee e1(120000,3351,yash) ;
e1.display();
return 0;}