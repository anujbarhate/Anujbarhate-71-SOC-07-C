#include<iostream>
using namespace std;
class calculator
{
public:
int add(int x,int y)
{
return x+y;
}
int add(int x,int y,int z)
{
return x+y+z;
}
};

int main()
{
calculator cal;
cout<<"The Addition is:"<<cal.add(2,3)<<endl;
cout<<"The Addition is:"<<cal.add(3,6,11)<<endl;
return 0;
}

