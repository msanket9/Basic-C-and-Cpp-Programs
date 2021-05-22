#include<iostream>
using namespace std;

class sort
{
	int a[100],i,j,n;
	
	public:
		void getarr(void);
		void bubbleSort(void);
		void diaplay(void);
};

void sort::getarr(void)
{
	cout<<"How many numbers do u wish to enter here?"<<endl<<">>> ";
	cin>>n;
	
	cout<<endl<<"\nNow enter some values one by one:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<">>> ";
		cin>>a[i];
	}
}

void sort::bubbleSort(void)
{
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				    a[j]=a[j+1];
				    a[j+1]=temp;
			}
		}
	}
}

void sort::diaplay(void)
{
	cout<<"\nSorted array: "<<endl;
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}

int main()
{
	sort bubble;
	
	bubble.getarr();
	bubble.bubbleSort();
	bubble.diaplay();
	
	return 0;
}
