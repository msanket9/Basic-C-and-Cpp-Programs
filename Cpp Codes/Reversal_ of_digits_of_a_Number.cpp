/*Complete cpp program to reverse a given positive integer n, of arbitraty lenght(any number of digits) and output lenght and its reverse.*/

#include<iostream>
using namespace std;

class reverse
{
int n,temp,rev;

public:
void getnum(void);
void revnum(void);
void display(void);
};

void reverse::getnum(void)
{
cout<<"\nEnter any Number: ";
cin>>n;
temp=n;
}

void reverse::revnum(void)
{
while(n>0)
{
	rev=0;
rev=rev*10 +(n%10);
n/=10;
}
}

void reverse::display(void)
{
cout<<"\nOriginal Number: "<<temp<<endl<<"Reversed Number: "<<rev<<endl<<endl;
}

int main(void)
{
reverse r1;

r1.getnum();
r1.revnum();
r1.display();

return 0;
}

