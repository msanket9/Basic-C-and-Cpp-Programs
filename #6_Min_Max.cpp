#include<iostream>
using namespace std;

class Number_array{

private:

    int num_arr[10];
    int min;
    int max;

public:
    void read_arr(void);
    void calc_minmax(void);	
};

void Number_array::read_arr(void){

	cout<<endl<<"Enter any 10 random numbers here: "<<endl;

	for(int i=0;i!=10;i++){
        cout<<">>> ";
        cin>>num_arr[i];
    }
}



void Number_array::calc_minmax(void){
    min=num_arr[0];
    max=num_arr[0];
	for(int i=0;i!=10;i++){
        if(num_arr[i]<=min)
           min=num_arr[i];
        
        if(num_arr[i]>=max)
            max=num_arr[i]; 
    }

    cout<<endl<<"Smallest Number: "<<min<<endl<<"Largest Number: "<<max<<endl;

}

int main(){

	Number_array n1;

	n1.read_arr();
    n1.calc_minmax();

return 0;
}
