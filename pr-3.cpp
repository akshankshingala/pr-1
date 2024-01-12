/*
3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format
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
	
	if(d.second>=60){
		d.minutes++;
		d.second=d.second-60;
	}
		if(d.minutes>=60){
		d.hours++;
		d.minutes=d.minutes-60;
	}
	
	
	cout<<"second is = "<<d.second<<endl;
	cout<<"minutes is ="<<d.minutes<<endl;
	cout<<"hours is ="<<d.hours<<endl;
	
	return 0;
	
}

/*
enter second98
enter minutes56
enter hours5

second is = 38
minutes is =57
hours is =5

*/



