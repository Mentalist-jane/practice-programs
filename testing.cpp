#include<iostream>
#include<string>
using namespace std ;

class item 
{
    int qty ;
    string material ;
public :   
    item ()
    {qty = 23;
    material = "solid";}

void display()
{cout << qty << endl;
cout << material << endl;}
};
   


int main()
{
    item s1;
    s1.display();
    return 0 ;}
