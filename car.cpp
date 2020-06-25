/************************************************************
//Connecting libraries										*
//This program demonstrates a Car class						*
//@author Sakchyam Shrestha									*
//Date of creation : 6th June 2020							*
//***********************************************************
*/
#include <iostream>
using namespace std;

//***********************************************************
//The class named Car										*
//***********************************************************
class Car
{
	//The class contains a static integer field named count
	static int count;
	public:
//***********************************************************
//The constructor											*
//***********************************************************
Car()
{
	//that adds 1 to the count
	count++;
	//displays the count each time a Car is created
	cout<<"The "<<count<<" car was created"<<endl;
}
//***********************************************************
//The destructor                                            *
//***********************************************************
~Car()
{
	//displays the count each time a Car is created
	cout<<"The "<<count<<" car was deleted"<<endl;
	//that subtracts 1 to the count
	count--;
}
};
int Car::count = 0;//for accessing static members
//***********************************************************
//The main function that declares an array of five Car.		*
//***********************************************************
int main()
{
	cout<<"Create:"<<endl;
	Car* car =new Car[5];
	cout<<endl<<endl<<"Delete:"<<endl;
	delete [] car;
	//Stop console
	cin.get();
	cin.get();
return 0;
}

