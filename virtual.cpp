#include <iostream>
using namespace std;

class Person
{
public:
 virtual void read()
{
cout<<"reading"<<endl;
}
};

class Student:public Person
{
public:
void read()
{
cout<<"reading"<<endl;
}
};

int main()
{
Person *ptr;
Student s;
ptr=& s;
ptr->read();
return 0;
};
