#include<iostream>
using namespace std;

template <class T> class Sum{
	private:
		T x;
		T y;
	public:
		Sum(T x, T y);
		T getSum();
		
};

template <class T> Sum<T>::Sum(T x, T y) {
	this->x = x;
	this -> y =y;
}

template <class T> T Sum<T>::getSum() {
	T z;
	z=x+y;
	return z;
}

int main() {
	Sum <int> z1(5,5);
	cout<<z1.getSum() <<"\n";
	return 0;
}
