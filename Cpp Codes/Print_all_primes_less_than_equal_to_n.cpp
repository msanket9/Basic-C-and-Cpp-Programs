#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n+1];
    ar[0]=1;
    ar[1]=1;
    for(int i=2;i<=n;i++){
        ar[i]=0;
    }
    for(int i=2;i<=n;i++){
        if(ar[i]==0){
            for(int j=i*i;j<=n;j+=i)
            ar[j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    if(ar[i]==0){
        cout<<i<<" ";
    }
}
