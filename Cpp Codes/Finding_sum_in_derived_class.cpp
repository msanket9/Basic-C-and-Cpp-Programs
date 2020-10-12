#include<iostream>
using namespace std;

class Base{
	float num1;
	
	public:
		float num2;
		
		void input_data(void){
			cout<<"\nEnter any random number: ";
			cin>>num1;
		}
		
		float getnum1(void){
			return num1;
		}
};

class Derived: public Base{
	float sum;
	
	public:
		void get_data(void){
			cout<<"\nEnter any random number: ";
			cin>>num2;
			
			sum=getnum1()+num2;
		}
		
		void show_data(void){
			cout<<"\nTwo numbers entered are "<<getnum1()<<" and "<<num2<<" and their sum is "<<sum<<endl;
		}
};

int main(){
	Derived d;
	
	d.input_data();
	d.get_data();
	d.show_data();
	
	return 0;
}
