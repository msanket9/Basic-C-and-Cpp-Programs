#include<iostream>
#include<math.h>
int fact(int);

using namespace std;

class sinxval
{
	float sinx;
	float x;
	float rad;
	int s;
	int term;
	
	public:
		void getdata(void)
		{
			cout<<"Enter the value of any angle in degrees here:"<<endl<<">>> ";
			cin>>x;
			
			cout<<endl<<"Enter the accuracy of the value needed in value 1-30"<<endl<<">>> ";
			cin>>term;
			
			rad=x*3.142/180;
		}
		
		void display(void)
		{
			cout<<"\nThe value of Sin "<<x<<" via sine series is "<<sinx<<endl;
			cout<<"\nThe value of Sin "<<x<<" via sine series is "<<sin(rad)<<endl;
		}
		
		void calsinx(void)
		{
			for(int i=0;i<term;i++)
	        {
		        if(i%2==0)
		        continue;
		
		    sinx=sinx+(pow(-1,s)*pow(rad,i)/fact(i));
		    s++;
	        }
		}
};

int fact(int n)
{
	int f=1,c=1;
	
	while(c<=n)
	{
		f=f*c;
		c++;
	}
	
	return f;
}

int main()
{
	sinxval sin;
	
	sin.getdata();
	sin.calsinx();
	sin.display();
	
	return 0;
}
