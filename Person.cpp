/************************************************************
//Connecting libraries										*
//This program demonstrates a Person class					*
//@author Sakchyam Shrestha									*
//Date of creation : 6th June 2020							*
//***********************************************************
*/
#include<iostream>
#include<string>
using namespace std;

//***********************************************************
//Creating class named Person								*
//***********************************************************

class Person 
{
	private:
		string lastname;
		string firstname;
		string zipcode;
	public:
		//default constructor created
		Person()
		{
			lastname = "X";
			firstname = "X";
			zipcode = "X";
		}
		//parameterized constructor created 
		Person( string l, string f, string z )
		{
			lastname = l;
			firstname = f;
			zipcode = z;
		}

		//displaying the data of class's object
		void display()
		{
			cout<< lastname <<"\t\t" << firstname <<"\t\t" << zipcode << endl;
		}	
};
//*******************************************************************
//Function Main                                                     *
//*******************************************************************  
int main()
{
	//creating object with default value
	Person p;
	cout << "lastname\tfirstname\tzipcode" << endl;
	//displaying data of object p
	p.display();
	//creating object by passing arguement
	Person p1("Lama","Pravat", "44600");
	//displaying data of object p1
	p1.display();	
}
