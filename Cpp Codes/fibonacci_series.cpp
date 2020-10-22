#include<iostream>
using namespace std;
int main(){
	int a=1,b=0,c,input;
	cout<<"Enter no. of times: ";cin>>input;
	while(input>=1){
		cout<<b<<" ";
		input--;
		c=a+b;
		a=b;
		b=c;
	}
	
}