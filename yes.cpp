#include<iostream>
#include<string>
using namespace std;

class Sample1 
{ // Open the class brace first!
protected : //  Fixed: Moved inside the class braces
    string name ; 
    int rollno;
public :
    void read()
    {    
        cin >> name ;
        cin >> rollno ;
    }
};

class Sample2 : public Sample1
{ 
public :
    void display()
    { 
        cout << name << endl;
        cout << rollno << endl; 
    }
};

int main()
{
    Sample2 e1;
    e1.read();
    e1.display();
    return 0 ;
} 