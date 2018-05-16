#include <iostream>
using namespace std;

void subseq(char arr[], int begin , char decisionSoFar[],int i){

	if(arr[begin] == '\0'){

		decisionSoFar[i] = '\0';

		cout<<decisionSoFar<<"\n";
		return;
	}




	subseq(arr,begin+1,decisionSoFar,i);
	decisionSoFar[i] = arr[begin];
	subseq(arr,begin+1,decisionSoFar,i+1);

}


int main(){

	char input[100];
	cin>>input;

	char output[100] = "";

	subseq(input,0,output,0);

	return 0;
}