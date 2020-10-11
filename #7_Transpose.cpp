#include<iostream>
using namespace std;

class MATRIX{
	private:
		int mat[10][10];
		int trans[10][10];
		int r;
		int c;
		
	public:
		MATRIX(void){
			trans[10][10]={0};
			mat[10][10]={0};
		}
		
	    void input_mat(void);
		void transpose(void);
		void display_mat(void);	
};

void MATRIX::input_mat(void){
	cout<<endl<<"Enter the number of rows and columns you wish to enter here: "<<endl<<">>> ";
	cin>>r;
	cout<<">>> ";
	cin>>c;
	
	cout<<endl<<"Now enter the elements in your desired matrix here: "<<endl;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<">>> ";
			cin>>mat[i][j];
		}
	}
	
}

void MATRIX::transpose(void){
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			trans[j][i]=mat[i][j];
		}
	}
}

void MATRIX::display_mat(void){
	cout<<endl<<"Matrix entered by user: "<<endl;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<"Transposed Matrix: "<<endl;
	
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<trans[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(void){
	MATRIX m1;
	
	m1.input_mat();
	m1.transpose();
	m1.display_mat();
	
	return 0;
}
