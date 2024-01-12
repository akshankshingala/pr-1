/*
2. WAP to create a class to read and add two times.
*/

#include<iostream>
using namespace std;


class time{
	
	public:
		
	int second;
	int minutes;
	int hours;
	
	
};

int main(){
	
	time d;
	
	
	cout<<"enter second";
	cin>>d.second;
	cout<<"enter minutes";
	cin>>d.minutes;
	cout<<"enter hours";
	cin>>d.hours;
	
	
	
	
	cout<<"second is = "<<d.second<<endl;
	cout<<"minutes is ="<<d.minutes<<endl;
	cout<<"hours is ="<<d.hours<<endl;
	
	return 0;
	
}


/*

*/

