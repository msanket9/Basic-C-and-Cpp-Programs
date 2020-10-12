#include<iostream>
using namespace std;

class NUMBER_LIST{
	
	private:
		int num_list[10];
        int product;
        int n;
		
	public:
		void read_list(void);
		void calc_product(void);	
};

void NUMBER_LIST::read_list(void){
	cout<<endl<<"Enter any 10 random numbers here: "<<endl;
	
	for(int i=0;i!=10;i++){
        cout<<">>> ";
		cin>>num_list[i];
		
	}
}

void NUMBER_LIST::calc_product(void){
    cout<<endl<<"Enter till which number you want to calculate the product:"<<endl<<">>> ";
    cin>>n;    
    product=1;
	for(int i=0;i!=n;i++){
       product*=num_list[i];    
    }
    cout<<endl<<"Product of "<<n<<" numbers entered: "<<product<<endl;
}

int main(){
	
	NUMBER_LIST n1;
	
	n1.read_list();
    n1.calc_product();
	
	return 0;
}
