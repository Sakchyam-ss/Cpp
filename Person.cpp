/*
Create a class named SavingsAccount. Provide fields for the customer (use the Person class from Exercise 3), account number, balance, and interest rate. Provide two 
constructors. One requires a customer and sets each numeric field to 0; the other requires a customer and an account number and sets the account’s opening balance to $100 at
3% interest. Include a function that displays an account’s data fields. Write a main()function that instantiates one SavingsAccount object of each type and displays their 
values. Save the file as SavingsAccount.cpp.
/*
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
	Person p1("Shrestha","Sakchyam", "44300");
	//displaying data of object p1
	p1.display();	
}
