#include<iostream>
using namespace std;

class sort
{
	int a[100],i,j,n;
	
	public:
		void getarr(void);
		void insertionSort(void);
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

void sort::insertionSort(void)
{
	int k,j;
	for(int i=0 ; i<n ;i++){
		k=a[i];
		for(j=i-1 ; j>=0 && a[j]>k ; j--)
			a[j+1]=a[j];
		a[j+1]=k;
	}
}

void sort::diaplay(void)
{
	cout<<"\nArray: "<<endl;
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}

int main()
{
	sort insertion;
	
	int choice;
        do{
        		cout<<"\n\n--------Available OPERATIONS-----------\n"
        			<<"1.New array input\n"
        			<<"2.Sort\n"
                	<<"3.Display array\n"
                	<<"4.Exit\n"
                	<<"-----------------------"
                	<<"\nEnter your choice:\t";
                cin>>choice;
                
                switch(choice)
                {
                        case 1: 
                                        insertion.getarr();
                                        break;
                        case 2:
                                        insertion.insertionSort();
                                        break;
                        case 3:
                                        insertion.diaplay();
                                        break;
                        case 4:
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
        }while(choice!=4);
return 0;
}

