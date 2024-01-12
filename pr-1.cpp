 /*
 1.WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
*/

#include<iostream>
using namespace std;

class Distance{
	public:
		
		int feet;
		int inch;
		
	
};

int main(){
	
	Distance d;
		Distance d1;
		
	int sum=0,sum1=0;
	
	cout<<"enter feet :-";
	cin>>d.feet;
	
	cout<<"enter inch :-";
	cin>>d.inch;
	
	cout<<"enter feet :-";
	cin>>d1.feet;
	
	cout<<"enter inch :-";
	cin>>d1.inch;
	
	sum = d.feet+d1.feet;
	sum = d.inch+d1.inch;
	
	if(d.inch>=12){
 	d.feet++;
 	d.inch=d.inch-12;
 }
	if(d1.inch>=12){
 	d1.feet++;
 	d1.inch=d1.inch-12;
 }
	
	
	cout<<"and feet = "<<sum<<endl;
		cout<<"and inch = "<<sum<<endl;
		
	cout<<d.feet<<endl;
	cout<<d.inch<<endl;
	cout<<d1.feet<<endl;
	cout<<d1.inch<<endl;

	
	return 0;
}



/*output:
	
	enter feet :-8
enter inch :-16
enter feet :-4
enter inch :-14
and feet = 30
and inch = 30
9
4
5
2
*/
