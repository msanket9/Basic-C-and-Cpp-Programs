#include<iostream>
using namespace std;

class matrix{
	public:
	int **p,**t;
	int r,c;

/**
matrix(){
p= new int* [1];
for(int i=0;i<1;i++)
p[i]= new int[1];

t= new int* [1];
for(int i=0;i<1;i++)
t[i]= new int[1];

}  */

void getrc(void){
cout<<"How many Rows and Columns do u wish to enter here?"<<endl<<">> ";
cin>>r;
cout<<">> ";
cin>>c;

p= new int* [r];
for(int i=0;i<r;i++)
p[i]= new int[c];

t= new int* [c];
for(int i=0;i<c;i++)
t[i]= new int[r];
}

void getmat(void){
for(int i=0;i<r;i++)
{
cout<<endl<<"Enter "<<c<<" Elements to Row " <<i+1<<endl;
for(int j=0;j<c;j++){
cout<<">> ";
cin>>p[i][j];
}
}
}

/**
void transpose(void){
cout<<"Im In!";
int temp;

for(int i=0;i<r;i++){
cout<<"tempr "<<temp;
for(int j=0;j<c;j++)
{
cout<<"inside i";
cout<<"tempc "<<temp;
temp=p[i][j];
p[i][j]=p[j][i];
p[j][i]=temp;
cout<<"inside j";
}
}
}
*/

void transpose(void){
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
t[j][i]=p[i][j];
}
}

void display(int m,int n,int **mat){
	r=m;
	c=n;
cout<<endl<<endl;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
cout<<mat[i][j]<<"\t";
cout<<endl;
}
}


};

int main(){
matrix m;

m.getrc();
m.getmat();

cout<<"\nYour Entered Matrix";
m.display(m.r,m.c,m.p);
m.transpose();
cout<<endl<<"Your Matrix After Transposal";
m.display(m.c,m.r,m.t);

return 0;
}




/**
int **p;

p= new int* [3];
for(int i=0;i<3;i++)
p[i]= new int[3];

for(int i=0;i<3;i++)
{
cout<<endl<<"Enter 3 elements to row " <<i<<endl;
for(int j=0;j<3;j++)
cin>>p[i][j];
}

for(int i=0;i<3;i++){
cout<<&p[i]<<endl;
for(int j=0;j<3;j++)
cout<<&p[i][j]<<" ";

cout<<endl;
}
*/
