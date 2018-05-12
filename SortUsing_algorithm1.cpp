#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void OutputArray(const int arr[], int size){
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}







int main(){


	//vector<int> vi;
	cout<<"Enter N:";
	int n;
	cin>>n;
	//vi.resize(n);

	int vi[100];

	for(int i=0;i<n;i++){
		cin>>vi[i];
	}


	//sort(vi.begin(),vi.end());

	sort(&vi[0],&vi[0]+n);
	//OR sort(vi,vi+n);

	OutputArray(vi,n);
}