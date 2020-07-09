#include<iostream>
using namespace std;

template <class T> class Sum{
	private:
		T x;
		T y;
	public:
		Sum(T x, T y)
		T getSum();
		
};

template <class T> Sum<T>::Sum(T x, T y) {
	this->x = x;
	this -> y =y;
}
