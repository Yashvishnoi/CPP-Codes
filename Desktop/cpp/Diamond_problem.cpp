#include<iostream>
using namespace std;
 int main() {
 	int rows, i, j , space=1;
 	cout<<"Rows"<<"\n";
 	cin>>rows;
 	space= rows-1;
 	for(i=1;i<=rows;i++){
 		for(j=1;j<=space;j++) {
 			cout<<" ";
		 }
		 space--;
		 for(j=1;j<=(2*i-1);j++) {
		 	cout<<"* ";
		 }
		 cout<<"\n";
	 }
	 space = 1;
	 for(i=1;i<(rows-1);i++) {
	 	for(j=1;j<=space;j++) {
	 		cout<<" ";
		 }
		 space ++;
		 for(j=1;j<=(2*(rows-1)-1);j++) {
		 cout<<"* ";
		 }
		 cout<<"\n";		 
	 }
 	return 0;
 }
