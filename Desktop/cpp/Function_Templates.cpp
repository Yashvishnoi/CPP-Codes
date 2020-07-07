#include<iostream>
using namespace std;

template <class T> T sum (Tx , Ty) {
	T z;
	z=x+y;
	return (z);
} 

int main {
	int x1= 5;
	int y1 = 5;
	int z1 = sum<int>(x1 , y1) ; 
	
	 // Here we call the function "sum" (type int)
	 
	cout<<z1 <<"\n";
	
	return 0;
	
}
