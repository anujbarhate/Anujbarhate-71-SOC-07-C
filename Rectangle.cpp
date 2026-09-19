#include<iostream>
using namespace std;


class Rectangle
{
private:  //Access Specifier
float l;
float b;

public:  //Access Specifier

void accept()
{

cout<<"Enter length:";
cin>>l;

cout<<"Enter breadth:";
cin>>b;

}

float area();
float perimeter();

void display()
{

cout<<"Area of Rectangle is:"<<area()<<endl;
cout<<"Perimeter of Rectangle is:"<<perimeter()<<endl;

}
};

float Rectangle:: area()
{
return(l*b);
}

float Rectangle:: perimeter()
{
return 2*(l+b);
}

int main()
{
Rectangle r;
r.accept();
r.display();
return 0;
}

