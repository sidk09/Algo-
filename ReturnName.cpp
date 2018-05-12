#include <iostream>
using namespace std;


char * getname(){
	
//	char name[20];

	char * name = new char[20];
	cin>>name;
	return name;

}






int main(){

	cout<<"Enter Name: ";
	char * myname = getname();
	cout<< myname;
	return 1;

} 