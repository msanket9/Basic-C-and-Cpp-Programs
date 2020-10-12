#include<iostream>
using namespace std;

int main(){
	int beg=1,mid,end,arr[100],n,find;
	
	bool cond=true;
	int ch=1;
	
	while(cond){
	
	switch(ch){
	case 1:
	cout<<"\nHow many elements do you want to enter? ";
	cin>>n;
	
	cout<<"\nNow enter "<<n<<" numbers in ascending order:\n";
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	
	case 2:
	cout<<"\nEnter element you want to search: ";
	cin>>find;
	
	beg=1;
	end=n;
	mid=(beg+end)/2;
	
	while(beg<=end && arr[mid]!=find){
		if(arr[mid]<find)
			beg=mid+1;
		else
			end=mid-1;
			
		mid=(beg+end)/2;
	}
	
	if(arr[mid]==find)
		cout<<endl<<find<<" is present at location "<<mid<<endl;
	else
		cout<<endl<<find<<" is not present\n";
	break;	
		default:
			cond=false;
	}
	
	cout<<"\n1 - Enter new array\n2 - Search new elemet in same array\nPress any key to exit...\n\nYour response: ";
	cin>>ch;

}
	return 0;
}
