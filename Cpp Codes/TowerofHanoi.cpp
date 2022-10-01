#include <iostream>
using namespace std;

void TOH(int n, char source, char helper, char dest){
    if (n==0)
    {
        return;
    }
    TOH(n-1, source,dest, helper);
    cout<<"from "<<source<<" to "<<dest<<endl;
    TOH(n-1, helper, source, dest);
}
int main()
{
    TOH(4, 'A', 'B', 'C');
    return 0;
}