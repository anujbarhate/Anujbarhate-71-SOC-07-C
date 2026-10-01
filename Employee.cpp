#include <iostream>
#include <string>
using namespace std;

class Employee
{
	private: //Access Specifier
	int empid;
	string name;
	float basicsalary;
	float bonus;
	float totalsalary;

	public: //Access Specifier
	Employee()
{
	empid = 999;
	name = "Anuj";
	basicsalary = 100000;
	bonus = 10000;
	totalsalary = 110000;

	cout<<"The Default Constructor is called"<<endl;
}

	Employee(int id,string n,float s,float b)
{
	empid = id;
	name = n;
	basicsalary = s;
	bonus = b;
	calculatetotalsalary();

	cout<<"The parameterized constructer is called"<<endl;
}

	void calculatetotalsalary()
{
	totalsalary = basicsalary + bonus;
}
	void display()
{
	cout<<"The Employee Id is : "<<empid<<endl;
	cout<<"The Name of the Employee is : "<<name<<endl;
	cout<<"The Basicsalary of the Employee is :"<<basicsalary<<endl;
	cout<<"The Bonus of the Employee is :"<<bonus<<endl;
	cout<<"The Totalsalary of the Employee is :"<<totalsalary<<endl;
}
};
	int main()
{
	Employee e1; //object for default constructor.
	e1.display();
	Employee e2(999,"Anuj",100000,10000); //Parameterized Constructor.
	e2.display();
	return 0;
}
