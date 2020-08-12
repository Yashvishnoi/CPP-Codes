
#include<iostream>
using namespace std;

int main() {
	cout<<"Problem 1.1_1";
	int a[]={10,5,3,7,20,98,4,70,87,89};

	
	for(int i=0;i<10;i++) {
		for (int j=0;j<10-1;j++){
			if(a[j]>a[j+1]) {
				int b = a[j];
				a[j]=a[j+1];
				a[j+1] = b;
			}
		}
	}
	
	cout<<"\n Sorted array by Yash-Vishnoi";
	for(int i=0; i<10;i++) {
		cout<<a[i]<<" "; 
	}
	cout<<"\n";
	return 0;
}
