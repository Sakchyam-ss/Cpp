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
			cout <<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
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
		Person customer;
		Date start;
		Date end;
			
	public:
		MagazineSubscription(Person c, Date startDate, Date endDate){
			customer= c;
			start = startDate;
			end = endDate;			
		}
		
		void display()
		{
			cout << "Subscriber Details :" <<endl;
			customer.display();
			cout << "Subscribed Start Date : " <<endl;
			start.display();
			cout << "Subscribed End Date : "<<endl;
			end.display();
		}
};

int main()
{
	Person p1;
	p1.firstname = "Sakchyam";
	p1.lastname = "Shrestha";
	p1.zipcode = "44600";

	Date d1;
	d1.day = 1;
	d1.month = 1;
	d1.year = 2000;

	Date d2;
	d2.day = 31;
	d2.month = 12;
	d2.year = 2002;
	
	MagazineSubscription m1(p1, d1, d2);
	m1.display();
	cout<<endl;
	
	return 0;
		
}

