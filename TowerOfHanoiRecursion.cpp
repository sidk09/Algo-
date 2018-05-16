#include <iostream>
using namespace std;


void toh(int n,char src, char dest, char helper){

	if(n==0) return;


	toh(n-1,src,helper,dest);
	cout<<"Move "<<n<<"th disc from "<<src<<" to "<<dest<<"\n";

	toh(n-1,helper,dest,src);

}





int main(){

	 cout<<"Enter number of disc:";

	 int n; cin>>n;

	 toh(n,'A','B','C');
}