#include <iostream>
#include <string>
using namespace std;

class Date
{
	int mm, dd, yy;
	
	public:
		Date(int month=12, int day = 25 ,int year=2010)
		{
			Date::mm=month;
			Date::dd=day;
			Date::yy=year;
			
		};
		void Date1();
		void Date2();
		void Date3();
};

string monthName[12] = {"Janaury","Febuary","March","April","May","June","July","August","September","October","November","December"};
void Date::Date1(){
	cout<<mm<<"/"<<dd<<"/"<<yy<<endl;
	
}
void Date::Date2(){
	cout<<monthName[mm-1]<<" "<<dd<<","<<yy<<endl;
	
}
void Date::Date3(){
	cout<<dd<<" "<<monthName[mm-1]<<" "<<yy<<endl;
}

int main()
{
	int mm, dd, yy;
	cout<<"Date Program. \n";
	do{cout<<"Enter Month: ";
		cin>>mm;
	}
	while(mm<1 || mm>12);
	do{cout<<"Enter Day: ";
		cin>>dd;
	}
	while(dd<1 || dd>31);
	do{cout<<"Enter Year: ";
		cin>>yy;
	}
	while(yy<1 || yy>3000);
	cout <<endl;
	std::cout<<"The Date."<<std::endl;
	cout<<endl;
	
	Date newDate(mm,dd,yy);
	newDate.Date1();
	newDate.Date2();
	newDate.Date3();
	
	cin.ignore();
	cin.get();
	return 0;
	
}


