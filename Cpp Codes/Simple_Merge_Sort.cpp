#include<iostream>
using namespace std;

int main()
{
	int a[100],b[100],n1,n2,c[200],n3,temp;
	
	cout<<"Enter Number of Elements in 1st Array: \n";
	cin>>n1;
	
	cout<<"Enter Elements:\n";
	for(int i=0;i!=n1;i++)
	cin>>a[i];
	
	cout<<"\nEnter Number of Elements in 2nd Array: \n";
	cin>>n2;
	
	cout<<"Enter Elements:\n";
	for(int i=0;i!=n2;i++)
	cin>>b[i];
	
	for(int i=0;i<n1-1;i++){
		for(int j=0;j<n1-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<n2-1;i++){
		for(int j=0;j<n2-1;j++){
			if(b[j]>b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	
	n3=n1+n2;
	
	int i=0, j=0, k=0;
	
		while(i<n1 && j<n2)
	{
		if(a[i]>=b[j])
		c[k++]=b[j++];
		else
		c[k++]=a[i++];
	}
	
	while(i<n1)
	c[k++]=a[i++];
	
	while(j<n2)
	c[k++]=b[j++];
	
	cout<<"\n\nSorted Array 1: \n";

	for(k=0;k<n1;k++)
	cout<<a[k]<<endl;
	
	cout<<"\n\nSorted Array 2: \n";

	for(k=0;k<n2;k++)
	cout<<b[k]<<endl;
	
	cout<<"\n\nSorted Array After Merging: \n";

	for(k=0;k<n3;k++)
	cout<<c[k]<<endl;
	
	return 0;
}


