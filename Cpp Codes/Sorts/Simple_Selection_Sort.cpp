#include<iostream>
using namespace std;

class sort
{
	int a[100],i,j,n;
	
	public:
		void getarr(void);
		void selectionSort(void);
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

void sort::selectionSort(void)
{
	for(int i=0;i<n-1;i++){
		int small=i;
			for(int j=i+1;j<n;j++){
				if(a[small]>a[j])
					small=j;
			}
			
		if(i!=small){
			int temp=a[i];
			a[i]=a[small];
			a[small]=temp;
		}
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
	sort selection;
	
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
                                        selection.getarr();
                                        break;
                        case 2:
                                        selection.selectionSort();
                                        break;
                        case 3:
                                        selection.diaplay();
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

