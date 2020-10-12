#include<iostream>
using namespace std;

int main()
{
	int a[100][100],b[100][100],c[100][100]={0},r1,c1,r2,c2;
	
	cout<<"\nEnter the Number of Rows and columns of your 1st Matrix: ";
	cin>>r1>>c1;
	
	cout<<"\nEnter Elements to Your 1st Martix: \n";
	for(int i=0;i!=r1;i++)
	for(int j=0;j!=c1;j++)
	{
		//cout<<"Element - ["<<i<<"]["<<j<<"]=  ";
		cin>>a[i][j];
	}
	
	cout<<"\nNow enter the Number of Rows and columns of your 2st Matrix: ";
	cin>>r2>>c2;
	
	cout<<"\nNow enter Elements to Your 2nd Martix: \n";
	for(int i=0;i!=r2;i++)
	for(int j=0;j!=c2;j++)
	{
		//cout<<"Element - ["<<i<<"]["<<j<<"]=  ";
		cin>>b[i][j];
	}
	
	if(c1!=r2)
   cout<<"\n\nOh no!, It seems your not intelligent enough to use this program.";
	else
	{
		for(int i=0;i!=r1;i++)
		for(int j=0;j!=c2;j++)
		for(int k=0;k!=r2;k++)
		c[i][j]+=(a[i][k]*b[k][j]);
		
		cout<<"\nMatrix 1\n\n";
		for(int i=0;i!=r1;i++)
		{
	        for(int j=0;j!=c1;j++)
	        {
	    	  cout<<a[i][j]<<"\t";
	    	}
	    	cout<<"\n";
	    }   
	    
	    cout<<"\nMatrix 2\n\n";
		for(int i=0;i!=r2;i++)
		{
	        for(int j=0;j!=c2;j++)
	        {
	    	  cout<<b[i][j]<<"\t";
	    	}
	    	cout<<"\n";
	    }   
		
		cout<<"\nProduct of your Entered Matrix:\n\n";
		
		for(int i=0;i!=r1;i++)
		{
	        for(int j=0;j!=c2;j++)
	        {
	    	  cout<<c[i][j]<<"\t";
	    	}
	    	cout<<"\n";
	    }   
	}
	
	return 0;
}
