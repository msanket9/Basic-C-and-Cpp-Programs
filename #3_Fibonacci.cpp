#include<iostream>
using namespace std;

class fibonacci
{
  long double t1;
  long double t2;
  long double f;
  int n;
  int count;
  
  public:
  void getterm(void)
  {
    cout<<"How many Fibonacci terms do you want to display? ";
    cin>>n;
  }   
  
  void printfibonacci(void)
  {
    count=3;
    t1=0;
    t2=1;
    
    if(n==0 || n<0)
    {
      cout<<"\nError #2234\n \nHow do I solve it?\nEnter number greater then 0!"<<endl;
    }

    else if(n==1)
    {
       cout<<"\nFibonacci terms: 0"<<endl;
    }
    
    else if(n==2)
    {
       cout<<"\nFibonacci terms: 0  1"<<endl;
    }

    else if(n>2)
   {

    cout<<"\nFibonacci terms: \n"<<t1<<"\t"<<t2<<"\t";

    while(count<=n)
    {
      if( count%8==0)
      cout<<endl;

      f=t1+t2;
      t1=t2;
      t2=f;
      
      count++;

      cout<<f<<"\t";
    }
    cout<<endl<<endl;
   }
 }

};

int main()
{
   fibonacci fib;

   fib.getterm();
   fib.printfibonacci();

   return 0;

}



