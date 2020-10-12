#include<iostream>
using namespace std;

class small{
	double d1,d2,sum;
	double smaller(void){
		if(d1<d2)
			return d1;
		else 
			return d2;	
	}
	
	public:
		void get_data(double d1t,double d2t){
			d1=d1t;
			d2=d2t;
			
			sum=d1+d2;
		}
		
		void put_data(void){
			cout<<"\nThe 2 numbers are "<<d1<<" and "<<d2<<" and their sum is "<<sum<<endl;
			cout<<"The smallest amongst these 2 is "<<smaller()<<endl;
		}
};

int main(){
	small s;
	double d1t,d2t;
	cout<<"Enter any 2 numbers: \n>>>";
			cin>>d1t;
			cout<<">>>";
			cin>>d2t;
	
	s.get_data(d1t,d2t);
	s.put_data();
	
	return 0;
}
