#include<iostream>
using namespace std;
class ElectronicDevice{

public:
	 ElectronicDevice(){
	 	cout<<"I am electronic device"<<endl;
	 }
};
class Computer:public ElectronicDevice{
public:
	Computer()
{
	cout<<"I am computer"<<endl;
}
};
class linux:public ElectronicDevice,public Computer
{};
int main()
{
	linux obj;
}
