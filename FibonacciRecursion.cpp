#include <iostream>

using namespace std;


int fibonacci(int n){

	//base case
	if(n==0 || n==1){
		return n;
	}

	//recursive step
	return fibonacci(n-1)+fibonacci(n-2);

}

int main(){
	cout<<"Enter n:";
	int n;
	cin>>n;

	int res = fibonacci(n);
	cout<<res;
}