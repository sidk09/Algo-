#include <iostream>
using namespace std;


void shift2(char arr[],int begin){
	int j=begin;
	while(arr[j] != '\0') j++;

	while(j>=begin){
		arr[j+2] = arr[j];
		j--;
	}
}







void replacePi(char arr[], int begin){

	if(arr[begin]=='\0'){
		return;
	}

	if( arr[begin] == 'p' && arr[begin+1] == 'i' ){

		shift2(arr,begin+2);
		arr[begin]  = '3';
		arr[begin+1]= '.';
		arr[begin+2]= '1';
		arr[begin+3]= '4';

		replacePi(arr,begin+4);
	}
	else{
		replacePi(arr,begin+1);
	}

}







int main(){
	char input[100];
	cout<<"Enter String:";
	cin>>input;

	replacePi(input,0);

	cout<<input;

	return 0;
}