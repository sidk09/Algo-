#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


bool compareStr(const string& A,const string& B){
	return A.size()<B.size();
}

int main(){


	int n;
	
	cout<<"Enter Number of Strings:";
	cin>>n;
	vector<string> vs;

	vs.resize(n);

	for(int i=0;i<n;i++){

		cin>>vs[i];

	}


	sort(vs.begin(),vs.end(),compareStr);

	for(int i=0;i<n;i++){
		cout<<vs[i]<<"\n";
	}

	



	return 0;
}