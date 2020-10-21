//https://www.codechef.com/LRNDSA02/problems/STFOOD

#include <iostream>
using namespace std;
struct Item{
  int stores;
  int price;
  int people;
  int profit;
};
void swap(Item *a, Item *b){
    Item t = *a;
    *a = *b;
    *b = t;
}
int partition(Item *items,int low,int high){
    int pivot = items[high].profit;
    int i = low-1;
    for(int j=low;j<=high-1;j++){
        if (items[j].profit<=pivot){
            i++;
            swap(&items[i],&items[j]);
        }
    }
    swap(&items[i+1],&items[high]);
    return i+1;
}
void quickSort(Item *items,int low,int high){
    if(low<high){
        int pi = partition(items, low, high);
        quickSort(items,low,pi-1);
        quickSort(items,pi+1,high);
    }
}
void sort(Item *items,int n){
    quickSort(items,0,n-1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    Item items[n];
	    for(int i=0;i<n;i++){
	        cin>>items[i].stores>>items[i].people>>items[i].price;
	        items[i].profit = (items[i].people/(items[i].stores+1))*items[i].price;
	    }
	   
	    
	    sort(items,n);
	    cout<<items[n-1].profit<<endl;
	}
	return 0;
}

