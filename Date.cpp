/************************************************************
//Connecting libraries										*
//This program demonstrates a Date class					*
//@author Sakchyam Shrestha									*
//Date of creation : 6th June 2020							*
//***********************************************************
*/
#include<iostream>
using namespace std;
//***********************************************************
//Creating class named Date									*
//***********************************************************
class Date
{
	private:
		int month; 
		int day; 
		int year;
	public:
		//default constructor created
		Date() 
		{
			month=1;
			day=1;
			year=2000;
		}
		//parameterized constructor created
		Date( int m, int d, int y) 
		{
			month=m;
			day=d;
			year=y;
		}
	 	//creating function to display value of date class object
		void display() 
		{
			cout << month <<"/" <<day <<"/"<< year <<endl;
		}	
};
//*******************************************************************
//Function Main                                                     *
//*******************************************************************  
int main()
{
	//creating object with default value
	Date d; 
	//displaying data of object d
	d.display(); 
	//creating object by passing arguement
	Date d1(2,3,2002);
	//displaying data of object d1 
	d1.display(); 
}
