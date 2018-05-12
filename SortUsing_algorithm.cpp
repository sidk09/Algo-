#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void OutputVector(const vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
}







int main(){
	vector<int> vi;
	cout<<"Enter N:";
	int n;
	cin>>n;
	vi.resize(n);

	for(int i=0;i<n;i++){
		cin>>vi[i];
	}


	sort(vi.begin(),vi.end());

	OutputVector(vi);
}