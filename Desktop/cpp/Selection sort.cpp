#include<iostream>
using namespace std;

int main() {
	int a[10] = {10,5,8,47,26,78,12,120,78,7};
	for(int i=0;i<10;i++) {
		int min = i;
		for(int j= i+1;j<10;j++) {
			if (a[j]<a[min]) {
			min = j;
			}
	}
		int temp = a[i];
		a[i] = a[min];
		a[min]=temp;
	}
	
	cout<<"Sorted array by Selection sort (Yash):   ";
	for(int i=0;i<10;i++) {
		cout<<a[i] <<" ";
	}
	return 0;
}
