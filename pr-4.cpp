/*
4. WAP to create a class which Read and Print House details along with Room details.
*/



#include<iostream>
#include<string>

using namespace std;

class house{
	
	public:
	
	int house_number;
	int BHk;
	char soc_name[100];
	char area[100];
	char city[100];
	char state[100];
	
};

int main(){
	
	house a;
	
	
	cout<<"enter house_number ";
	cin>>a.house_number;
	cout<<"enter BHk ";
	cin>>a.BHk;
	cout<<"enter soc_name ";
	cin>>a.soc_name;
	cout<<"enter area ";
	cin>>a.area;
	cout<<"enter city ";
	cin>>a.city;
	cout<<"enter state ";
	cin>>a.state;
	
	
	cout<<"house_number"<<a.house_number<<endl;
	cout<<"BHk"<<a.BHk<<endl;
	cout<<"soc_name"<<a.soc_name<<endl;
	cout<<"area"<<a.area<<endl;
	cout<<"city"<<a.city<<endl;
	cout<<"state"<<a.state<<endl;
}

/*

enter house_number 39
enter BHk 9
enter soc_name maninagar
enter area simadanak
enter city surat
enter state gujrat

house_number39
BHk9
soc_namemaninagar
areasimadanak
citysurat
stateg

*/

