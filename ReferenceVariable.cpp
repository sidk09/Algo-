#include <iostream>
using namespace std;


void mySwap(int &a,int &b){
	int temp = a;
	a=b;
	b=temp;
}

int main(){
    int x,y;
    x=2;
    y=49;
    mySwap(x,y);
    cout<<"Swapped Values are:"<< x <<" "<< y;
    
    
    return 0;

}
   