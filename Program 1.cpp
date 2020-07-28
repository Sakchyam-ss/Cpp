/*****************************************************
This program demonstrates a Date classs
//@author Sakchyam Shrestha
//Date of creation: 9th July 2020
******************************************************
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


//Creating class named Date
class Date
{
	private:
		int month; 
		int day;
		int year;
		
		
	//default constructor created
	public:
		
		//parameterized constructor created 
		Date()
		{
			month = 1;
			day = 1;
			year = 2000;
		}
	 	//creating function to 
		Date(int m, int d, int y);
		Date operator ++();
		Date operator ++(int);
		Date operator --();
		Date operator --(int);
		Date operator -(Date d);
		
		
		//creating function to display value of date class object	
		void showDate1();
		void showDate2();
		void showDate3();
		
		void prefixinc();
		void postfixinc();
		void prefixdec();
		void postfixdec();
		void sub();
};
//Declaring the months in string
static string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "Agust", "September", "October", "November", "December"};

/********************************************************************************************************************************************************************/
Date :: Date(int m, int d, int y)
{
	//Initialize variables.
	month = m;
	day = d;
	year = y;
}
//Class implementation Section
//Accessoing function
Date Date :: operator++()         
{
	Date temp;					//a temporary date to store the result
	temp.day = day;				
	temp.month = month;
	temp.year = year;
	++temp.day;					//adds the day in +1
	if ((temp.year % 400 == 0) || (temp.year % 100 != 0 && temp.year % 4 ==0)){				//to check for leap year
		if (temp.day >28 && temp.day <29 && temp.month == 2){
			temp.day = 29;
			temp.month = month;
		}
		else if (temp.day >29 && temp.month == 2){
			temp.day = 1;
			temp.month += 1;
		}
	}
	else{
		if ((temp.day > 31) || (temp.day > 28 && temp.month == 2)){
			temp.day = 1;
			temp.month += 1;
		}
	}

	if(temp.day>31)						//to adjust the month and year
	{	
		temp.day = 1;
		temp.month += 1;
	}
	if(temp.month > 12){
		temp.month = 1;
		temp.year += 1;
	}
	return temp;						//returns the values stored in temp
}
Date Date :: operator++(int)
{
	Date temp;
	temp.day = day;
	temp.month = month;
	temp.year = year;
	temp.day++;
	if ((temp.year % 400 == 0) || (temp.year % 100 != 0 && temp.year % 4 ==0)){
		if (temp.day >28 && temp.day <29 && temp.month == 2){
			temp.day = 29;
			temp.month = month;
		}
		else if (temp.day >29 && temp.month == 2){
			temp.day = 1;
			temp.month += 1;
		}
	}
	else{
		if ((temp.day > 31) || (temp.day > 28 && temp.month == 2)){
			temp.day = 1;
			temp.month += 1;
		}
	}
	if(temp.day > 31){
		temp.day = 1;
		temp.month +=1;
	}
		else (temp.month >12);{
			temp.month = 1;
			temp.year += 1;  
	}
	return temp;
}
Date Date :: operator--()
{
	Date temp;
	temp.day = day;
	temp.month = month;
	temp.year = year;
	--temp.day;
	if (temp.day < 1){	
			if (temp.month == 3){
			if ((temp.year % 400 == 0) || (temp.year % 100 != 0 && temp.year % 4 ==0))
				temp.day = 29;
			else
				temp.day = 28;
		}
		else
			temp.day = 31;
		temp.month -= 1;
		if (temp.month < 1){
			temp.month = 12;
			temp.year -= 1;
		}	
	}
	return temp;
}
Date Date :: operator--(int)
{
	Date temp;
	temp.day = day;
	temp.month = month;
	temp.year = year;
	temp.day--;
	if (temp.day < 1){
		if (temp.month == 3){
			if ((temp.year % 400 == 0) || (temp.year % 100 != 0 && temp.year % 4 ==0))
				temp.day = 29;
			else
				temp.day = 28;
		}
		else
			temp.day = 31;
		temp.month -= 1;
		if (temp.month < 1){
			temp.month = 12;
			temp.year -= 1;
		}	
	}
	return temp;
}
Date Date :: operator-(Date d)
{
	int x, y, z;
	x = (month - d.month);
	y = (day - d.day);
	z = (year - d.year);
	Date temp(x,y,z);
	return temp;
}
/********************************************************************************************************************************************************************/

/***************************************************************************
*Member function to display Date                      *
****************************************************************************/
void Date::showDate1(){
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date::showDate2(){
		cout<<monthName[month-1]<<" "<<day<<","<<year<<endl;
}
void Date::showDate3(){
	cout<<day<<" "<<monthName[month-1]<<" "<<year<<"\n\n"<<endl;
}
void Date::prefixinc(){
	cout<<"After Prefix increament: ";
	cout<<day<<" "<<monthName[month-1]<<" "<<year<<endl;
}
void Date::postfixinc(){
	cout<<"After Postfix increament: ";
	cout<<day<<" "<<monthName[month-1]<<" "<<year<<"\n"<<endl;
}
void Date::prefixdec(){
	cout<<"After Prefix decrement: ";
	cout<<day<<" "<<monthName[month-1]<<" "<<year<<endl;
}
void Date::postfixdec(){
	cout<<"After Postfix decrement: ";
	cout<<day<<" "<<monthName[month-1]<<" "<<year<<"\n\n"<<endl;
}
void Date::sub(){
	cout << "The difference is off by : " <<day<<" Days ,"<<month<<" Month ,"<<" and "<<year<<" Year";
}

/********************************************************************************************************************************************************************/
//*******************************************************************
//Main Date Function                                                *
//*******************************************************************
int main()
{
	//creating object with default value
	int m, d, y;
	cout<<"Date Program. \n";
	
	//Asking the user to input values for the date
	startm:
	cout << "Enter a month: ";
	cin >> m;
	if (m>12 || m<1)	{
		cout << "Invalid month! (month is in between from 1 to 12)" << endl;
		goto startm;
	}
	startd:
	cout << "Enter a day: ";
	cin >> d;
	if (d>31 || d<1)	{
		cout << "Invalid day! (day is in between from 1 to 31)" << endl;
		goto startd;
	}
	cout << "Enter a year: ";
	cin >> y;
	cout<<"The Date You Entered is : \n"<<endl;
	
	cout<<"Default Date set by the program. \n";
	//displaying data of default object
	Date d1;
	d1.showDate1();
	d1.showDate2();
	d1.showDate3();
	
	cout<<"The Date that you have entered. \n";
	//displaying data of object d2 values entered by the user
	Date d2(m,d,y);
	d2.showDate1();
	d2.showDate2();
	d2.showDate3();
	
	//displaying data of object d3 and d4 after incrementing and decreasing the value by 1
	Date d3 = ++d2;
	d3.prefixinc();
	d3.postfixinc();
	Date d4 = --d2;
	d4.prefixdec();
	d4.postfixdec();

	//displaying data of object d5 after the subtraction operator
	cout<<"Difference Between the default date and the date that u have entered. \n\n";
	cout<<"Default Date : ";
	d1.showDate2();
	cout<<"Date you entered : ";
	d2.showDate2();
	Date d5;
	d5 = d2 - d1;"\n";
	d5.sub();
	
	return 0;
}

