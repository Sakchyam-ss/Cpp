/************************************************************
//Connecting libraries										*
//This program demonstrates a Saving Account				*
//@author Sakchyam Shrestha									*
//Date of creation : 6th June 2020							*
//***********************************************************
*/
#include<iostream>
#include<string>
using namespace std;
//***********************************************************
//Creating class named SavingAccount						*
//***********************************************************
class SavingAccount
{
	private:
		string lastname;
		string firstname;
		string zipcode;
		int accno;
		float balance;
		float interest;
	public:
		//default constructor created
		SavingAccount()
		{
			lastname = "X";
			firstname = "X";
			zipcode = "X\t";
			accno = 0;
			balance = 0;
			interest = 0;
		}
		//parameterized constructor created 
		SavingAccount(string l, string f, string z, int acc, float bal, float i)
		{
			lastname = l;
			firstname = f;
			zipcode = z;
			accno = acc;
			balance = bal;
			interest = i;
		}

		//displaying the data of class's object
		void display()
		{
			cout << lastname << "\t\t" << firstname << "\t\t" << zipcode << "\t\t" << accno << "\t" << balance << "\t\t" << interest << endl;
		}
};
//*******************************************************************
//Function Main                                                     *
//*******************************************************************  
int main()
{
	//creating object with default value
	SavingAccount s;
	cout << "lastname\tfirstname\tzipcode\t\taccount no.\tbalance($)\tinterest(%)" << endl;
	//displaying data of object s
	s.display();
	//creating object by passing arguement
	SavingAccount s1("Lama","Pravat", "44600", 1234567890, 100, 3);
	//displaying data of object s1
	s1.display();
}
