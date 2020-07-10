#include<iostream>
using namespace std;

template <class T>
 T sum (T x , T y) {
	T z;
	z=x+y;
	return (z);
} 

int main() {
	int x1= 5;
	int y1 = 5;
	int z1 = sum<int>(x1 , y1) ; 
	
	 // Here we call the function "sum" (type int)
	double x2 = 5.8;
	double y2 = 5.1;
	double z2 = sum<double>(x2 , y2) ;
	 // here we call the function "sum" (type double)
	float x3 = 5.8f;
	float y3 = 5.1f;
	float z3 = sum<float>(x2 , y2) ;	 
	cout<<z1 <<"\n";
	cout<<z2<<"\n";
	cout<<z3<<"\n";
	return 0;
	
}
