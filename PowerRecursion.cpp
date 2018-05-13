#include <iostream>
using namespace std;


int power(int x, int y){
	if(y==0){
		return 1;
	}
	return x*power(x,y-1);
}


int main(){

	int n,p;

	cout<<"Enter n:";
	cin>>n;

	cout<<"Enter power:";
	cin>>p;

	cout<<power(n,p);


	return 0;
}