/* 5.	Create a class named MagazineSubscription. Include fields for the subscriber (use the Person class you created in Exercise 3) and
the subscription's start and expiration dates (use the Date class you created in Exercise 2). Include a constructor that takes three 
arguments-a Person and two Dates. Also include a display function that displays MagazineSubscription fields by calling the Person and Date
display functions. Write a main() function in which you instantiate a Person object and two Date objects. Use these as arguments to the 
constructor that instantiates a MagazineSubscription object. Display the MagazineSubscription object. Save the file as 
MagazineSubscription.cpp
*/
#include<iostream>

using namespace std;

class Date
{
	public:
		int month; 
		int day; 
		int year;
		
	 	//creating function to display value of date class object
		void display() 
		{
			cout << month <<"/" <<day <<"/"<< year <<endl;
		}	
};

class Person 
{
	public:
		string lastname;
		string firstname;
		string zipcode;
		
		void display()
		{
			cout<<"Last name :"<<lastname<<endl;
			cout<<"First name: "<<firstname<<endl;
			cout<<"zip code: "<<zipcode<<endl;	
		}
};

class MagazineSubscription
{
	private:
		Person costumer;
		Date suscriber;
		
	public:
		MagazineSubscription(Person a){
			
		}	
};

