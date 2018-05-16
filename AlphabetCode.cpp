#include <iostream>
using namespace std;

char result[20];

void output(char arr[],int i, int ridx){

	if(arr[i]=='\0'){
		result[ridx] = '\0';
		cout<<result<<"\n";
		return;
	}

	int dig = arr[i] - '0' ;

	 char c = 'A' + dig - 1 ;

	 result[ridx] = c;


	output(arr,i+1,ridx+1);

	if(arr[i+1] == '\0') return;

	int nexDig = arr[i+1] - '0' ;

	int num = 10*dig + nexDig ;

	if(num>26) return;

	char new_c = 'A' + num - 1;

	result[ridx] = new_c;


	output(arr,i+2,ridx+1);
}

int main(){

	char arr[20]; cin>>arr;



	output(arr,0,0);
	return 0;
}
